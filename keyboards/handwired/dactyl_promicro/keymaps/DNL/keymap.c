#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define NM_PD 3

#define RAISE TG(_RAISE)
#define LOWER TG(_LOWER)
#define NUMPAD TG(NM_PD)

#define ONE_GRV LT(1,KC_GRAVE)
#define CTL_Z LCTL_T(KC_Z)
#define ALT_SHFT LALT(KC_LSFT)
#define ALT_MENU LALT_T(KC_MENU)
#define LG_QUOT LGUI_T(KC_QUOT)
#define CTL_ESC LCTL_T(KC_ESC)
#define CTL_SLS LCTL_T(KC_SLSH)
#define LT2_COL LT(_RAISE, KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_6x6(
        KC_NO , KC_Q ,  KC_W  , KC_E , KC_R  , KC_T  ,                                  KC_Y , KC_U , KC_I  , KC_O  , KC_P  , KC_NO ,
        KC_NO , KC_A ,  KC_S  , LCTL_T(KC_D) , KC_F  , KC_G  ,                          KC_H , KC_J , KC_K  , KC_L  ,RSFT_T(KC_SCLN), KC_NO ,
        KC_NO , KC_Z ,  KC_X  , KC_C , KC_V  , KC_B,                                    KC_N , KC_M ,KC_COMM, KC_DOT,KC_SLSH, KC_NO ,
        KC_NO , TO(0) , KC_LWIN , NUMPAD	, KC_NO , KC_NO ,	               		 KC_NO   , KC_NO , KC_WH_U , KC_WH_D , RAISE  , KC_NO ,
        KC_NO , KC_NO , KC_LEFT , KC_SPC    , LOWER , KC_UP ,                  		 KC_DOWN , KC_BSPC , KC_ENT , KC_RGHT , KC_NO , KC_NO ,
													KC_NO,KC_NO,KC_NO,		KC_NO,KC_NO,KC_NO,
                                                                KC_NO,		KC_NO,
                                                                KC_NO,		KC_NO
    ),
    [_LOWER] = LAYOUT_6x6(
        _______,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,                                       KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,_______,
        _______,KC_EXLM,KC_AT  ,KC_LBRC,KC_RBRC,KC_PIPE,                                       KC_PERC,KC_CIRC,KC_LBRC,KC_RBRC,KC_TILD,_______,
        _______,KC_HASH,KC_DLR ,KC_LPRN,KC_RPRN,KC_GRV ,                                       KC_AMPR,KC_PAST,KC_PPLS,KC_PSLS,KC_PEQL,_______,
        _______, TO(0) ,_______, NUMPAD,_______,_______,                        			KC_AMPR,KC_NO  , KC_NO , KC_NO , RAISE ,_______,
        _______,_______,_______,_______, LOWER ,_______,                            		_______,_______,_______,_______,_______,_______,
                                                _______,_______,_______,    _______,_______,_______,
                                                                _______,    _______,
                                                                _______,    _______
    ),
    [_RAISE] = LAYOUT_6x6(
        _______,QK_BOOT,KC_ESC , KC_NO , KC_NO , KC_NO ,                                       KC_VOLU,KC_VOLD,KC_MPLY,KC_MUTE, KC_NO ,_______,
        _______,KC_TAB ,KC_NO  ,KC_MS_U,KC_LALT, KC_NO ,                                       KC_NO  ,KC_BTN1,KC_BTN2, KC_NO , KC_NO ,_______,
        _______, KC_NO ,KC_MS_L,KC_MS_D,KC_MS_R, KC_NO ,                                       KC_WBAK,KC_MPRV,KC_MNXT, KC_NO , KC_NO ,_______,
        _______, TO(0) ,_______, NUMPAD, KC_NO , KC_NO ,                            		_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                            		_______,_______,_______,_______,_______,_______,
                                                _______,_______,_______,    _______,_______,_______,
                                                                _______,    _______,
                                                                _______,    _______
    ),
	[NM_PD] = LAYOUT_6x6(
		KC_NO , KC_ESC , KC_NO , KC_NO , KC_NO , KC_NO ,                                         KC_PMNS , KC_P7 , KC_P8  , KC_P9  ,KC_PAST, KC_NO ,
        KC_NO , KC_LSFT,KC_DEL, KC_NO ,KC_RSFT, KC_NO  ,                                         KC_PPLS , KC_P4 , KC_P5  , KC_P6  ,KC_PSLS, KC_NO ,
        KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,                                          KC_P0   , KC_P1 , KC_P2  , KC_P3  ,KC_PDOT, KC_NO ,
        KC_NO , TO(0) , KC_LWIN , NUMPAD , KC_NO , KC_NO ,	               		            KC_NO   , KC_NO  , KC_WH_U , KC_WH_D, RAISE , KC_NO ,
        KC_NO , KC_NO , KC_LEFT , KC_SPC , LOWER , KC_UP ,                 		            KC_DOWN , KC_BSPC, KC_ENT , KC_RGHT , KC_NO , KC_NO ,
													KC_NO,KC_NO,KC_NO,      KC_NO,KC_NO,KC_NO,
                                                                KC_NO,		KC_NO,
                                                                KC_NO ,	    KC_NO
	)
};
