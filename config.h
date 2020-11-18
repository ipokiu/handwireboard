#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    ipokiu
#define PRODUCT         ergoyeet
#define DESCRIPTION     made for funsies

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 6

/* key matrix pins */
#define MATRIX_ROW_PINS { D7, E6, B4, B5 }
#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6 }
#define UNUSED_PINS

/* rotary encoder pins */
/*
#define ENCODERS_PAD_A { F6 }
#define ENCODERS_PAD_B { F7 }
#define ENCODER_RESOLUTION 2*/

/* media key slowdown for windows */
#define TAP_CODE_DELAY 20

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW


/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5