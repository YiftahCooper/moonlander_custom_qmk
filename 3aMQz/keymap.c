#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_0_0_0,
  HSV_0_137_115,
  HSV_0_255_255,
  HSV_21_255_255,
  HSV_43_255_255,
  HSV_64_255_255,
  HSV_86_255_255,
  HSV_109_255_255,
  HSV_4_255_255,
  HSV_25_255_255,
  HSV_47_255_255,
  HSV_68_255_255,
  HSV_90_255_255,
  HSV_114_255_255,
  HSV_8_255_255,
  HSV_30_255_255,
  HSV_51_255_255,
  HSV_73_255_255,
  HSV_95_255_255,
  HSV_119_255_255,
  HSV_12_255_255,
  HSV_34_255_255,
  HSV_55_255_255,
  HSV_77_255_255,
  HSV_100_255_255,
  HSV_124_255_255,
  HSV_17_255_255,
  HSV_38_255_255,
  HSV_60_255_255,
  HSV_81_255_255,
  HSV_105_255_255,
  HSV_0_0_255,
  HSV_129_255_255,
  HSV_148_255_255,
  HSV_172_255_255,
  HSV_193_255_255,
  HSV_215_255_255,
  HSV_236_255_255,
  HSV_133_255_255,
  HSV_152_255_255,
  HSV_176_255_255,
  HSV_197_255_255,
  HSV_219_255_255,
  HSV_240_255_255,
  HSV_138_255_255,
  HSV_157_255_255,
  HSV_180_255_255,
  HSV_202_255_255,
  HSV_223_255_255,
  HSV_245_255_255,
  HSV_143_255_255,
  HSV_162_255_255,
  HSV_184_255_255,
  HSV_206_255_255,
  HSV_227_255_255,
  HSV_249_255_255,
  HSV_167_255_255,
  HSV_189_255_255,
  HSV_210_255_255,
  HSV_232_255_255,
  HSV_253_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
};




enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
};

#define DUAL_FUNC_0 LT(9, KC_F12)
#define DUAL_FUNC_1 LT(5, KC_J)
#define DUAL_FUNC_2 LT(4, KC_P)
#define DUAL_FUNC_3 LT(1, KC_F20)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_EQUAL,                                       KC_PAGE_UP,     KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_HOME,        
    TD(DANCE_0),    KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_MINUS,                                       KC_PGDN,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_END,         
    DUAL_FUNC_0,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           ST_MACRO_0,                                                                     TG(1),          KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_MEH,         
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_UP,          OSL(1),         
    KC_LEFT_CTRL,   KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LBRC,        KC_RBRC,        MT(MOD_RALT, KC_TAB),                                                                                                DUAL_FUNC_1,    KC_QUOTE,       KC_SLASH,       KC_LEFT,        KC_DOWN,        KC_RIGHT,       
    TD(DANCE_1),    MT(MOD_RCTL, KC_PSCR),LCTL(KC_LEFT_SHIFT),                TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_5)
  ),
  [1] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_EXLM,        KC_KP_PLUS,     KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_EQUAL,    KC_AMPR,        
    KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,                                         KC_PERC,        KC_KP_MINUS,    KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_CIRC,        KC_DLR,         
    KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        KC_LPRN,        KC_RPRN,        KC_PIPE,        TG(2),                                                                          KC_TRANSPARENT, KC_KP_ASTERISK, KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_HASH,        ST_MACRO_1,     
    KC_TRANSPARENT, KC_GRAVE,       KC_DQUO,        KC_LBRC,        KC_RBRC,        KC_TILD,                                        KC_KP_SLASH,    KC_KP_COMMA,    KC_KP_0,        KC_KP_DOT,      KC_UP,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LABK,        KC_RABK,        KC_TRANSPARENT,                                                                                                 KC_ENTER,       KC_LPRN,        KC_RPRN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_DELETE,      KC_BSPC,        KC_SPACE
  ),
  [2] = LAYOUT_moonlander(
    HSV_0_0_0,      HSV_0_137_115,  TOGGLE_LAYER_COLOR,RGB_TOG,        TG(4),          HSV_0_0_0,      QK_BOOT,                                        KC_TRANSPARENT, ST_MACRO_13,    ST_MACRO_14,    ST_MACRO_15,    ST_MACRO_16,    ST_MACRO_17,    ST_MACRO_18,    
    KC_TAB,         ST_MACRO_2,     LCTL(KC_BSPC),  LCTL(KC_DELETE),ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,                                     KC_TRANSPARENT, KC_KP_COMMA,    KC_COMMA,       KC_DOT,         KC_KP_DOT,      KC_INTERNATIONAL_1,KC_TRANSPARENT, 
    TO(3),          KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  LCTL(KC_K),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, DUAL_FUNC_2,    RCTL(KC_LEFT),  KC_END,         RCTL(KC_RIGHT), DUAL_FUNC_3,    KC_TRANSPARENT, 
    ST_MACRO_6,     ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,     ST_MACRO_10,    ST_MACRO_11,                                    MT(MOD_LCTL, KC_R),TD(DANCE_4),    KC_LEFT,        KC_RIGHT,       LCTL(LSFT(KC_MINUS)),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_12,    LALT(KC_LEFT_SHIFT),KC_UP,                                                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT,        KC_DOWN,        KC_RIGHT,                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    HSV_0_255_255,  HSV_21_255_255, HSV_43_255_255, HSV_64_255_255, HSV_86_255_255, HSV_109_255_255,QK_BOOT,                                        HSV_0_0_255,    HSV_129_255_255,HSV_148_255_255,HSV_172_255_255,HSV_193_255_255,HSV_215_255_255,HSV_236_255_255,
    HSV_4_255_255,  HSV_25_255_255, HSV_47_255_255, HSV_68_255_255, HSV_90_255_255, HSV_114_255_255,RGB_TOG,                                        TOGGLE_LAYER_COLOR,HSV_133_255_255,HSV_152_255_255,HSV_176_255_255,HSV_197_255_255,HSV_219_255_255,HSV_240_255_255,
    HSV_8_255_255,  HSV_30_255_255, HSV_51_255_255, HSV_73_255_255, HSV_95_255_255, HSV_119_255_255,RGB_SLD,                                                                        RGB_MODE_FORWARD,HSV_138_255_255,HSV_157_255_255,HSV_180_255_255,HSV_202_255_255,HSV_223_255_255,HSV_245_255_255,
    HSV_12_255_255, HSV_34_255_255, HSV_55_255_255, HSV_77_255_255, HSV_100_255_255,HSV_124_255_255,                                HSV_143_255_255,HSV_162_255_255,HSV_184_255_255,HSV_206_255_255,HSV_227_255_255,HSV_249_255_255,
    HSV_17_255_255, HSV_38_255_255, HSV_60_255_255, HSV_81_255_255, HSV_105_255_255,KC_TRANSPARENT,                                                                                                 TO(0),          HSV_167_255_255,HSV_189_255_255,HSV_210_255_255,HSV_232_255_255,HSV_253_255_255,
    RGB_VAD,        RGB_HUD,        RGB_SPD,                        RGB_SPI,        RGB_HUI,        RGB_VAI
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};




bool capslock_active = false;

bool led_update_user(led_t led_state) {
  capslock_active = led_state.caps_lock;
  return true;
}

extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {22,251,241}, {22,251,241}, {22,251,241}, {185,244,212}, {185,244,212}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {185,244,212}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {185,244,212}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {253,252,242}, {185,244,212}, {185,244,212}, {185,244,212}, {185,244,212}, {22,251,241}, {22,251,241}, {185,244,212}, {239,255,255}, {22,251,241}, {83,223,238}, {83,223,238}, {83,223,238}, {22,251,241}, {22,251,241}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {22,251,241}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {83,223,238}, {22,251,241}, {22,251,241}, {239,255,255}, {22,251,241}, {22,251,241}, {22,251,241}, {22,251,241} },

    [1] = { {22,251,241}, {22,251,241}, {22,251,241}, {185,244,212}, {185,244,212}, {137,252,242}, {137,252,242}, {154,255,255}, {154,255,255}, {185,244,212}, {137,252,242}, {137,252,242}, {154,255,255}, {154,255,255}, {185,244,212}, {137,252,242}, {137,252,242}, {154,255,255}, {154,255,255}, {154,255,255}, {137,252,242}, {137,252,242}, {154,255,255}, {154,255,255}, {154,255,255}, {137,252,242}, {137,252,242}, {154,255,255}, {154,255,255}, {137,252,242}, {137,252,242}, {239,255,255}, {185,244,212}, {185,244,212}, {185,244,212}, {185,244,212}, {154,255,255}, {154,255,255}, {154,255,255}, {154,255,255}, {22,251,241}, {110,252,242}, {110,252,242}, {110,252,242}, {22,251,241}, {22,251,241}, {191,255,255}, {191,255,255}, {191,255,255}, {110,252,242}, {22,251,241}, {191,255,255}, {191,255,255}, {191,255,255}, {191,255,255}, {154,255,255}, {191,255,255}, {191,255,255}, {191,255,255}, {110,252,242}, {154,255,255}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {239,255,255}, {22,251,241}, {22,251,241}, {22,251,241}, {22,251,241} },

    [2] = { {239,255,255}, {0,192,254}, {154,255,255}, {10,225,255}, {85,203,158}, {239,255,255}, {10,225,255}, {0,192,254}, {10,225,255}, {85,203,158}, {239,255,255}, {10,225,255}, {0,192,254}, {10,225,255}, {85,203,158}, {239,255,255}, {10,225,255}, {85,203,158}, {154,255,255}, {10,225,255}, {239,255,255}, {10,225,255}, {85,203,158}, {10,225,255}, {137,252,242}, {22,251,241}, {10,225,255}, {10,225,255}, {10,225,255}, {45,255,255}, {0,192,254}, {239,255,255}, {198,215,255}, {198,215,255}, {198,215,255}, {198,215,255}, {0,192,254}, {0,192,254}, {0,0,255}, {0,192,254}, {0,192,254}, {0,192,254}, {0,0,255}, {10,225,255}, {10,225,255}, {0,192,254}, {0,192,254}, {10,225,255}, {10,225,255}, {0,0,255}, {0,192,254}, {0,192,254}, {10,225,255}, {10,225,255}, {0,0,255}, {0,192,254}, {0,192,254}, {0,192,254}, {10,225,255}, {10,225,255}, {154,255,255}, {0,192,254}, {10,225,255}, {10,225,255}, {10,225,255}, {0,192,254}, {0,192,254}, {0,192,254}, {154,255,255}, {85,203,158}, {85,203,158}, {85,203,158} },

    [3] = { {0,255,255}, {4,255,255}, {8,255,255}, {12,255,255}, {17,255,255}, {21,255,255}, {25,255,255}, {30,255,255}, {34,255,255}, {38,255,255}, {43,255,255}, {47,255,255}, {51,255,255}, {55,255,255}, {60,255,255}, {64,255,255}, {68,255,255}, {73,255,255}, {77,255,255}, {81,255,255}, {86,255,255}, {90,255,255}, {95,255,255}, {0,0,0}, {105,255,255}, {109,255,255}, {114,255,255}, {119,255,255}, {124,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {236,255,255}, {240,255,255}, {245,255,255}, {249,255,255}, {253,255,255}, {215,255,255}, {219,255,255}, {223,255,255}, {227,255,255}, {232,255,255}, {193,255,255}, {197,255,255}, {202,255,255}, {206,255,255}, {210,255,255}, {172,255,255}, {176,255,255}, {180,255,255}, {184,255,255}, {189,255,255}, {148,255,255}, {152,255,255}, {157,255,255}, {162,255,255}, {167,255,255}, {129,255,255}, {133,255,255}, {138,255,255}, {143,255,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {22,251,241}, {22,251,241}, {22,251,241}, {185,244,212}, {185,244,212}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {185,244,212}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {185,244,212}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {137,252,242}, {185,244,212}, {185,244,212}, {185,244,212}, {185,244,212}, {22,251,241}, {22,251,241}, {185,244,212}, {185,244,212}, {22,251,241}, {110,252,242}, {110,252,242}, {110,252,242}, {22,251,241}, {22,251,241}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {22,251,241}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {110,252,242}, {22,251,241}, {22,251,241}, {239,255,255}, {22,251,241}, {22,251,241}, {22,251,241}, {22,251,241} },

    [5] = { {22,251,241}, {22,251,241}, {22,251,241}, {185,244,212}, {185,244,212}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {185,244,212}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {185,244,212}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {253,252,242}, {185,244,212}, {185,244,212}, {185,244,212}, {185,244,212}, {22,251,241}, {22,251,241}, {185,244,212}, {185,244,212}, {22,251,241}, {131,252,242}, {131,252,242}, {131,252,242}, {22,251,241}, {22,251,241}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {22,251,241}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {131,252,242}, {22,251,241}, {22,251,241}, {131,252,242}, {22,251,241}, {22,251,241}, {22,251,241}, {22,251,241} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  if (capslock_active && biton32(layer_state) == 0) {
    RGB rgb = hsv_to_rgb_with_value((HSV) { 126, 252, 242 });
    rgb_matrix_set_color( 32, rgb.r, rgb.g, rgb.b );
  } 
  return true;
}



typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[6];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
    }
    if(state->count > 3) {
        tap_code16(KC_DELETE);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_DELETE); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_DELETE)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DELETE); register_code16(KC_DELETE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_DELETE); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_DELETE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DELETE); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
    }
    if(state->count > 3) {
        tap_code16(KC_SPACE);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_SPACE); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: register_code16(KC_CAPS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SPACE); register_code16(KC_SPACE);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_SPACE); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: unregister_code16(KC_CAPS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SPACE); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
    }
    if(state->count > 3) {
        tap_code16(KC_DELETE);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_DELETE); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_DELETE)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DELETE); register_code16(KC_DELETE);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_DELETE); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_DELETE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DELETE); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
    }
    if(state->count > 3) {
        tap_code16(KC_BSPC);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_BSPC); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSPC); register_code16(KC_BSPC);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_BSPC); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSPC); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_S));
        tap_code16(LCTL(KC_S));
        tap_code16(LCTL(KC_S));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_S));
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_S)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_S)); register_code16(LCTL(KC_S)); break;
        case DOUBLE_HOLD: register_code16(LALT(LCTL(LSFT(KC_5)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_S)); register_code16(LCTL(KC_S));
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_S)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_S)); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LCTL(LSFT(KC_5)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_S)); break;
    }
    dance_state[4].step = 0;
}

void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    // No action on intermediate steps
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_SPACE); break;
        case SINGLE_HOLD: register_code16(KC_SPACE); break;
        case DOUBLE_TAP: 
            tap_code16(KC_DOT);
            tap_code16(KC_SPACE);
            break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SPACE); register_code16(KC_SPACE); break;
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_SPACE); break;
        case SINGLE_HOLD: unregister_code16(KC_SPACE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SPACE); break;
    }
    dance_state[5].step = 0;
}


tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_LEFT_ALT)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_U)SS_DELAY(100)  SS_TAP(X_2)SS_DELAY(100)  SS_TAP(X_0)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_C)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_X))SS_DELAY(100)  SS_TAP(X_B));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_X))SS_DELAY(100)  SS_LCTL(SS_TAP(X_W)));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_X))SS_DELAY(100)  SS_LCTL(SS_TAP(X_S)));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_DOT)SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_X))SS_DELAY(100)  SS_LCTL(SS_TAP(X_MINUS))SS_DELAY(100)  SS_LCTL(SS_TAP(X_G)));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_X))SS_DELAY(100)  SS_LCTL(SS_LSFT(SS_TAP(X_EQUAL)))SS_DELAY(100)  SS_LCTL(SS_TAP(X_G)));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_X))SS_DELAY(100)  SS_TAP(X_K));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_X))SS_DELAY(100)  SS_TAP(X_0));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_X))SS_DELAY(100)  SS_LCTL(SS_TAP(X_F)));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_X))SS_DELAY(100)  SS_LCTL(SS_TAP(X_F)));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_X))SS_DELAY(100)  SS_TAP(X_2));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_X) SS_TAP(X_KP_0) SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_E) ));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_U) SS_TAP(X_KP_0) SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_E) ));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U)))SS_DELAY(100)  SS_TAP(X_KP_0)SS_DELAY(100)  SS_TAP(X_KP_0)SS_DELAY(100)  SS_TAP(X_KP_2)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_X) SS_TAP(X_KP_0) SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_E) ) SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_U) SS_TAP(X_KP_0) SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_E) ) SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U)))SS_DELAY(100)  SS_TAP(X_KP_0)SS_DELAY(100)  SS_TAP(X_KP_0)SS_DELAY(100)  SS_TAP(X_KP_2)SS_DELAY(100)  SS_TAP(X_E)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_BSPC);
        } else {
          unregister_code16(KC_BSPC);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_BSPC));
        } else {
          unregister_code16(LCTL(KC_BSPC));
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_ENTER);
        } else {
          unregister_code16(KC_ENTER);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_ENTER));
        } else {
          unregister_code16(LSFT(KC_ENTER));
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_A));
        } else {
          unregister_code16(LCTL(KC_A));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_LBRC)));
        } else {
          unregister_code16(LALT(LSFT(KC_LBRC)));
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_E));
        } else {
          unregister_code16(LCTL(KC_E));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_RBRC)));
        } else {
          unregister_code16(LALT(LSFT(KC_RBRC)));
        }  
      }  
      return false;
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_0_0_0:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,0,0);
        }
        return false;
    case HSV_0_137_115:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,137,115);
        }
        return false;
    case HSV_0_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,255,255);
        }
        return false;
    case HSV_21_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(21,255,255);
        }
        return false;
    case HSV_43_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(43,255,255);
        }
        return false;
    case HSV_64_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(64,255,255);
        }
        return false;
    case HSV_86_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(86,255,255);
        }
        return false;
    case HSV_109_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(109,255,255);
        }
        return false;
    case HSV_4_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(4,255,255);
        }
        return false;
    case HSV_25_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(25,255,255);
        }
        return false;
    case HSV_47_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(47,255,255);
        }
        return false;
    case HSV_68_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(68,255,255);
        }
        return false;
    case HSV_90_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(90,255,255);
        }
        return false;
    case HSV_114_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(114,255,255);
        }
        return false;
    case HSV_8_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(8,255,255);
        }
        return false;
    case HSV_30_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(30,255,255);
        }
        return false;
    case HSV_51_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(51,255,255);
        }
        return false;
    case HSV_73_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(73,255,255);
        }
        return false;
    case HSV_95_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(95,255,255);
        }
        return false;
    case HSV_119_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(119,255,255);
        }
        return false;
    case HSV_12_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(12,255,255);
        }
        return false;
    case HSV_34_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(34,255,255);
        }
        return false;
    case HSV_55_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(55,255,255);
        }
        return false;
    case HSV_77_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(77,255,255);
        }
        return false;
    case HSV_100_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(100,255,255);
        }
        return false;
    case HSV_124_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(124,255,255);
        }
        return false;
    case HSV_17_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(17,255,255);
        }
        return false;
    case HSV_38_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(38,255,255);
        }
        return false;
    case HSV_60_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(60,255,255);
        }
        return false;
    case HSV_81_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(81,255,255);
        }
        return false;
    case HSV_105_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(105,255,255);
        }
        return false;
    case HSV_0_0_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,0,255);
        }
        return false;
    case HSV_129_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(129,255,255);
        }
        return false;
    case HSV_148_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(148,255,255);
        }
        return false;
    case HSV_172_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(172,255,255);
        }
        return false;
    case HSV_193_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(193,255,255);
        }
        return false;
    case HSV_215_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(215,255,255);
        }
        return false;
    case HSV_236_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(236,255,255);
        }
        return false;
    case HSV_133_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(133,255,255);
        }
        return false;
    case HSV_152_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(152,255,255);
        }
        return false;
    case HSV_176_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(176,255,255);
        }
        return false;
    case HSV_197_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(197,255,255);
        }
        return false;
    case HSV_219_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(219,255,255);
        }
        return false;
    case HSV_240_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(240,255,255);
        }
        return false;
    case HSV_138_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(138,255,255);
        }
        return false;
    case HSV_157_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(157,255,255);
        }
        return false;
    case HSV_180_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(180,255,255);
        }
        return false;
    case HSV_202_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(202,255,255);
        }
        return false;
    case HSV_223_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(223,255,255);
        }
        return false;
    case HSV_245_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(245,255,255);
        }
        return false;
    case HSV_143_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(143,255,255);
        }
        return false;
    case HSV_162_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(162,255,255);
        }
        return false;
    case HSV_184_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(184,255,255);
        }
        return false;
    case HSV_206_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(206,255,255);
        }
        return false;
    case HSV_227_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(227,255,255);
        }
        return false;
    case HSV_249_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(249,255,255);
        }
        return false;
    case HSV_167_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(167,255,255);
        }
        return false;
    case HSV_189_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(189,255,255);
        }
        return false;
    case HSV_210_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(210,255,255);
        }
        return false;
    case HSV_232_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(232,255,255);
        }
        return false;
    case HSV_253_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(253,255,255);
        }
        return false;
  }
  return true;
}