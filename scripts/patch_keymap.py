import sys
import re

def patch_keymap(filepath):
    with open(filepath, 'r') as f:
        content = f.read()

    # 1. Define the custom Dance Code
    DANCE_NAME = "DANCE_DOUBLE_SPACE"
    
    # 2. Inject Enum
    # Find the tap_dance_codes enum and add our custom code
    # Pattern looks for "enum tap_dance_codes {" ... "};"
    enum_pattern = re.compile(r'(enum tap_dance_codes\s*\{[^}]*)(\};)', re.DOTALL)
    if enum_pattern.search(content):
        content = enum_pattern.sub(r'\1  ' + DANCE_NAME + r',\n\2', content)
    else:
        # If no tap dance codes exist yet, we need to create the enum (unlikely for Moonlander but possible)
        # We'll insert it before keymaps
        pass # Assuming Oryx always has some dances or at least the structure. If not, this is complex.
             # Given the user's config has dances, this should work.

    # 3. Inject Function Logic
    # We'll insert the logic functions before the 'tap_dance_actions' definition
    
    custom_logic = """
// --- CUSTOM INJECTION START ---
typedef struct {
    bool is_press_action;
    uint8_t step;
} tap_custom;

enum {
    SINGLE_TAP_C = 1,
    SINGLE_HOLD_C,
    DOUBLE_TAP_C,
    DOUBLE_HOLD_C,
    DOUBLE_SINGLE_TAP_C,
    MORE_TAPS_C
};

static tap_custom dance_space_state = { .is_press_action = false, .step = 0 };

uint8_t dance_step_custom(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP_C;
        else return SINGLE_HOLD_C;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP_C;
        else if (state->pressed) return DOUBLE_HOLD_C;
        else return DOUBLE_TAP_C;
    }
    return MORE_TAPS_C;
}

void on_dance_space(tap_dance_state_t *state, void *user_data) {
    // No action on intermediate steps
}

void dance_space_finished(tap_dance_state_t *state, void *user_data) {
    dance_space_state.step = dance_step_custom(state);
    switch (dance_space_state.step) {
        case SINGLE_TAP_C: register_code16(KC_SPACE); break;
        case SINGLE_HOLD_C: register_code16(KC_SPACE); break; // Or modifiers if needed
        case DOUBLE_TAP_C: 
            tap_code16(KC_DOT);
            tap_code16(KC_SPACE);
            break;
        case DOUBLE_SINGLE_TAP_C: tap_code16(KC_SPACE); register_code16(KC_SPACE); break;
    }
}

void dance_space_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_space_state.step) {
        case SINGLE_TAP_C: unregister_code16(KC_SPACE); break;
        case SINGLE_HOLD_C: unregister_code16(KC_SPACE); break;
        case DOUBLE_SINGLE_TAP_C: unregister_code16(KC_SPACE); break;
    }
    dance_space_state.step = 0;
}
// --- CUSTOM INJECTION END ---

"""
    # Insert before tap_dance_actions
    actions_decl_pattern = re.compile(r'(tap_dance_action_t tap_dance_actions\[\]\s*=\s*\{)')
    if actions_decl_pattern.search(content):
        content = actions_decl_pattern.sub(custom_logic + r'\1', content)
        
        # 4. Inject Action Registration
        # Add the action to the array
        action_line = f"[{DANCE_NAME}] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_space, dance_space_finished, dance_space_reset),"
        content = actions_decl_pattern.sub(r'\1\n  ' + action_line, content)

    # 5. Patch Keymap Matrix (Layer 0)
    # Target: The last key in Layer 0. 
    # Logic: Find "[0] = LAYOUT_moonlander(" ... match closing parens.
    # This is tricky with regex. We'll iterate manually or use a specific marker.
    # Assumption: User wants the *last* key of Layer 0 to be the space tap dance.
    
    # Locate Layer 0 start
    layer0_start = content.find('[0] = LAYOUT_moonlander(')
    if layer0_start != -1:
        # Find the closing parenthesis for this layer
        # We count parens to be safe
        depth = 0
        layer0_end = -1
        for i in range(layer0_start, len(content)):
            if content[i] == '(':
                depth += 1
            elif content[i] == ')':
                depth -= 1
                if depth == 0:
                    layer0_end = i
                    break
        
        if layer0_end != -1:
            layer_content = content[layer0_start:layer0_end]
            # Replace the last KC_SPACE with TD(...)
            # We look for the last occurrence of KC_SPACE in this substring
            # Note: The user might have multiple spaces. The thumb cluster space is usually last.
            
            # Split by comma to find keys
            keys = layer_content.split(',')
            
            # Iterate backwards to find KC_SPACE
            found_idx = -1
            for idx in range(len(keys) - 1, -1, -1):
                if 'KC_SPACE' in keys[idx]:
                    found_idx = idx
                    break
            
            if found_idx != -1:
                # Replace it
                keys[found_idx] = keys[found_idx].replace('KC_SPACE', f'TD({DANCE_NAME})')
                # Reassemble
                new_layer_content = ','.join(keys)
                content = content[:layer0_start] + new_layer_content + content[layer0_end:]
                print(f"Patched Layer 0 key at index {found_idx}")
            else:
                print("Warning: Could not find KC_SPACE in Layer 0 to patch.")

    with open(filepath, 'w') as f:
        f.write(content)

if __name__ == "__main__":
    if len(sys.argv) > 1:
        patch_keymap(sys.argv[1])
    else:
        print("Usage: python patch_keymap.py <path_to_keymap.c>")
