#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

#define KC_ KC_TRNS

#define KC__CLES LCTL_T(KC_ESC)

#define KC__LGUI LGUI_T(KC_LPRN)
#define KC__LWR LT(_LOWER,KC_BSPC)
//#define KC__LSFT LSFT_T(KC_MINS)
#define KC__RSFT RSFT_T(KC_ENT)
#define KC__RSE LT(_RAISE,KC_SPC)
#define KC__RALT RALT_T(KC_RPRN)

#define KC_RTOG RGB_TOG
#define KC_RMR RGB_M_R
#define KC_RMD RGB_MOD
#define KC_RRMD RGB_RMOD
#define KC_RHUI RGB_HUI
#define KC_RHUD RGB_HUD
#define KC_RSAI RGB_SAI
#define KC_RSAD RGB_SAD
#define KC_RVAI RGB_VAI
#define KC_RVAD RGB_VAD
#define KC_GUI_PRN GUI_PRN

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
  GUI_PRN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_kc(
  //┌────┬────┬────┬────┬────┬────┐               ┌────┬────┬────┬────┬────┬────┐
     GESC, 1  , 2  , 3  , 4  , 5  ,                 6  , 7  , 8  , 9  , 0  ,MINS,
  //├────┼────┼────┼────┼────┼────┤               ├────┼────┼────┼────┼────┼────┤
     TAB , Q  , W  , E  , R  , T  ,                Y,   U   , I  , O  , P  ,BSLS,
  //├────┼────┼────┼────┼────┼────┤               ├────┼────┼────┼────┼────┼────┤
     _CLES,A  , S  , D  , F  , G  ,                H,   J   , K  , L  ,SCLN,QUOT,
  //├────┼────┼────┼────┼────┼────┼────┐     ┌────┼────┼────┼────┼────┼────┼────┤
     LSFT, Z  , X  , C  , V  , B  ,LOCK,      BTN2, N  , M  ,COMM, DOT,SLSH,RSFT,
  //└────┴────┴────┴─┬──┴─┬──┴─┬──┴─┬──┘     └──┬─┴──┬─┴──┬─┴──┬─┴────┴────┴────┘
                      LGPO,_LWR,LSFT,           SFTENT,_RSE,RAPC
                  // └────┴────┴────┘           └────┴────┴────┘
  ),

 [_LOWER] = LAYOUT_kc(
  //┌────┬────┬────┬────┬────┬────┐               ┌────┬────┬────┬────┬────┬────┐
     F12 , F1 , F2 , F3 , F4 , F5 ,                 F6 , F7 , F8 , F9 , F10, F11,
  //├────┼────┼────┼────┼────┼────┤               ├────┼────┼────┼────┼────┼────┤
         ,EXLM,AT  ,HASH,DLR ,PERC,                CIRC,LBRC,RBRC,LCBR,RCBR,    ,
  //├────┼────┼────┼────┼────┼────┤               ├────┼────┼────┼────┼────┼────┤
         ,EQL ,CIRC,MINS,UNDS, DLR,                LEFT,DOWN, UP ,RGHT,PLUS,    ,
  //├────┼────┼────┼────┼────┼────┼────┐     ┌────┼────┼────┼────┼────┼────┼────┤
         ,GRV ,TILD,    ,    ,    ,PGUP,      BTN2,    ,    ,    ,    ,    ,    ,
  //└────┴────┴────┴─┬──┴─┬──┴─┬──┴─┬──┘     └──┬─┴──┬─┴──┬─┴──┬─┴────┴────┴────┘
                          ,    ,PGDN,                ,TRNS,
                  // └────┴────┴────┘           └────┴────┴────┘
  ),

  [_RAISE] = LAYOUT_kc(
  //┌────┬────┬────┬────┬────┬────┐               ┌────┬────┬────┬────┬────┬────┐
     F12 , F1 , F2 , F3 , F4 , F5 ,                 F6 , F7 , F8 , F9 , F10, F11,
  //├────┼────┼────┼────┼────┼────┤               ├────┼────┼────┼────┼────┼────┤
         ,EXLM,AT  ,HASH,DLR ,PERC,                CIRC,LBRC,RBRC,LCBR,RCBR,    ,
  //├────┼────┼────┼────┼────┼────┤               ├────┼────┼────┼────┼────┼────┤
         ,EQL ,CIRC,MINS,UNDS, DLR,                LEFT,DOWN, UP ,RGHT,PLUS,    ,
  //├────┼────┼────┼────┼────┼────┼────┐     ┌────┼────┼────┼────┼────┼────┼────┤
         ,GRV ,TILD,    ,    ,    ,PGUP,      BTN2,    ,    ,    ,    ,    ,    ,
  //└────┴────┴────┴─┬──┴─┬──┴─┬──┴─┬──┘     └──┬─┴──┬─┴──┬─┴──┬─┴────┴────┴────┘
                          ,TRNS,PGDN,                ,    ,
                  // └────┴────┴────┘           └────┴────┴────┘
  ),

  [_ADJUST] = LAYOUT_kc(

  //┌────┬────┬────┬────┬────┬────┐               ┌────┬────┬────┬────┬────┬────┐
         ,F14 ,F15 ,    ,    ,    ,                    ,    ,    ,    ,    ,    ,
  //├────┼────┼────┼────┼────┼────┤               ├────┼────┼────┼────┼────┼────┤
     RTOG,RMR ,    ,    ,    ,    ,                    ,BTN1,MS_U,BTN2,    ,    ,
  //├────┼────┼────┼────┼────┼────┤               ├────┼────┼────┼────┼────┼────┤
      RMD,RRMD,MRWD,MFFD,MPLY,MSTP,                    ,MS_L,MS_D,MS_R,    ,    ,
  //├────┼────┼────┼────┼────┼────┼────┐     ┌────┼────┼────┼────┼────┼────┼────┤
         ,    ,    ,    ,     ,   ,    ,          ,    ,MUTE,RHUI,RSAI,RVAI,    ,
  //└────┴────┴────┴─┬──┴─┬──┴─┬──┴─┬──┘     └──┬─┴──┬─┴──┬─┴──┬─┴────┴────┴────┘
                          ,    ,    ,                ,    ,
                  // └────┴────┴────┘           └────┴────┴────┘
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  //static uint16_t guiprn_timer;

  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case KC__LWR:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      //return false;
      break;

    case KC__RSE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      //return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;

    /* case GUI_PRN: */
    /*   if (record->event.pressed) { */
    /*     guiprn_timer = timer_read(); */
    /*     register_code (KC_LGUI); */
    /*   } else { */
    /*     if (timer_elapsed (guiprn_timer) < TAPPING_TERM) { */
    /*       register_code (LSFT(KC_0)); */
    /*       unregister_code (LSFT(KC_0)); */
    /*     } */
    /*     unregister_code (KC_LGUI); */
    /*   } */
    /*   break; */
  }

  return true;
}

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    }
    else if (index == 1) {
        switch(biton32(layer_state)){
            case 1:
                if (clockwise) {
                    tap_code(KC_VOLD);
                } else {
                    tap_code(KC_VOLU);
                }
                break;
            default:
                if (clockwise) {
                    tap_code(KC_WH_U);
                } else {
                    tap_code(KC_WH_D);
                }
                break;
        }
    }
}
