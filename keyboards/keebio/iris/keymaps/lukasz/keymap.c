#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

#define KC_ KC_TRNS

#define KC_CLES LCTL_T(KC_ESC)
#define KC_LGUI LGUI_T(KC_LBRC)
#define KC_LWR LT(1,KC_SCLN)
#define KC_RSE LT(2,KC_BSPC)
#define KC_RALT RALT_T(KC_RBRC)

#define KC_RTOG RGB_TOG
#define KC_RMD RGB_MOD
#define KC_RRMD RGB_RMOD
#define KC_RHUI RGB_HUI
#define KC_RHUD RGB_HUD
#define KC_RSAI RGB_SAI
#define KC_RSAD RGB_SAD
#define KC_RVAI RGB_VAI
#define KC_RVAD RGB_VAD

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_kc(
  //┌────┬────┬────┬────┬────┬────┐               ┌────┬────┬────┬────┬────┬────┐
     GESC, 1  , 2  , 3  , 4  , 5  ,                 6  , 7  , 8  , 9  , 0  ,MINS,
  //├────┼────┼────┼────┼────┼────┤               ├────┼────┼────┼────┼────┼────┤
     TAB , Q  , W  , E  , R  , T  ,                Y,   U   , I  , O  , P  ,BSLS,
  //├────┼────┼────┼────┼────┼────┤               ├────┼────┼────┼────┼────┼────┤
     CLES, A  , S  , D  , F  , G  ,                H,   J   , K  , L  ,SCLN,QUOT,
  //├────┼────┼────┼────┼────┼────┼────┐     ┌────┼────┼────┼────┼────┼────┼────┤
     LSPO, Z  , X  , C  , V  , B  , GRV,      MENU, N  , M  ,COMM, DOT,SLSH,RSPC,
  //└────┴────┴────┴─┬──┴─┬──┴─┬──┴─┬──┘     └──┬─┴──┬─┴──┬─┴──┬─┴────┴────┴────┘
                      LGUI, LWR, ENT,             SPC, RSE, RALT
                  // └────┴────┴────┘           └────┴────┴────┘
  ),

 [_LOWER] = LAYOUT_kc(
  //┌────┬────┬────┬────┬────┬────┐               ┌────┬────┬────┬────┬────┬────┐
         ,    ,    ,    ,    ,    ,                    ,    ,    ,    ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤               ├────┼────┼────┼────┼────┼────┤
         , 7  , 8  , 9  ,LBRC,LCBR,                RCBR,RBRC,    ,    ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤               ├────┼────┼────┼────┼────┼────┤
         , 4  , 5,   6  ,    ,    ,                LEFT,DOWN, UP ,RGHT,    ,    ,
  //├────┼────┼────┼────┼────┼────┼────┐     ┌────┼────┼────┼────┼────┼────┼────┤
         , 1  , 2,   3  ,LPRN,    ,    ,          ,    ,RPRN,    ,    ,    ,    ,
  //└────┴────┴────┴─┬──┴─┬──┴─┬──┴─┬──┘     └──┬─┴──┬─┴──┬─┴──┬─┴────┴────┴────┘
                          ,    ,    ,                ,    ,
                  // └────┴────┴────┘           └────┴────┴────┘
  ),

  [_RAISE] = LAYOUT_kc(
  //┌────┬────┬────┬────┬────┬────┐               ┌────┬────┬────┬────┬────┬────┐
     F12 , F1 , F2 , F3 , F4 , F5 ,                 F6 , F7 , F8 , F9 , F10, F11,
  //├────┼────┼────┼────┼────┼────┤               ├────┼────┼────┼────┼────┼────┤
     RTOG,    ,MRWD,MFFD,MPLY,MSTP,                    ,    ,    ,    ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤               ├────┼────┼────┼────┼────┼────┤
      RMD,RRMD,VOLD,VOLU,UNDS,LPRN,                RPRN,PIPE,RHUI,RSAI,RVAI,    ,
  //├────┼────┼────┼────┼────┼────┼────┐     ┌────┼────┼────┼────┼────┼────┼────┤
     MUTE,    ,    ,    ,     ,   ,PGUP,          ,    ,    ,RHUD,RSAD,RVAD,    ,
  //└────┴────┴────┴─┬──┴─┬──┴─┬──┴─┬──┘     └──┬─┴──┬─┴──┬─┴──┬─┴────┴────┴────┘
                          ,    ,PGDN,                ,    ,
                  // └────┴────┴────┘           └────┴────┴────┘
  ),

  [_ADJUST] = LAYOUT_kc(
  //┌────┬────┬────┬────┬────┬────┐               ┌────┬────┬────┬────┬────┬────┐
         ,    ,    ,    ,    ,    ,                    ,    ,    ,    ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤               ├────┼────┼────┼────┼────┼────┤
         ,    ,    ,    ,    ,    ,                    ,    ,    ,    ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤               ├────┼────┼────┼────┼────┼────┤
         ,    ,    ,    ,    ,    ,                    ,    ,    ,    ,    ,    ,
  //├────┼────┼────┼────┼────┼────┼────┐     ┌────┼────┼────┼────┼────┼────┼────┤
         ,    ,    ,    ,    ,    ,    ,          ,    ,    ,    ,    ,    ,    ,
  //└────┴────┴────┴─┬──┴─┬──┴─┬──┴─┬──┘     └──┬─┴──┬─┴──┬─┴──┬─┴────┴────┴────┘
                          ,    ,    ,                ,    ,
                  // └────┴────┴────┘           └────┴────┴────┘
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    else if (index == 1) {
        switch(biton32(layer_state)){
            case 1:
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }
                break;
            default:
                if (clockwise) {
                    tap_code(KC_PGDN);
                } else {
                    tap_code(KC_PGUP);
                }
                break;
        }
    }
}
