#pragma once

//#define USE_MATRIX_I2C
/* #ifdef KEYBOARD_crkbd_rev1_legacy */
/* #    undef USE_I2C */
/* #    define USE_SERIAL */
/* #endif */

/* Select hand configuration */
/* #define SPLIT_USB_DETECT */
#define MASTER_LEFT
/* #define MASTER_RIGHT */
// #define EE_HANDS

#define USE_SERIAL_PD2
#define ONESHOT_TAP_TOGGLE 2 /* 3 */
#define ONESHOT_TIMEOUT 6000
/* Don't need these, copied them from another config. */
/* #define TAPPING_FORCE_HOLD */
#define TAPPING_TERM 150
#define IGNORE_MOD_TAP_INTERRUPT

#define MOUSEKEY_INTERVAL 20
#define MOUSEKEY_DELAY 10
#define MOUSEKEY_TIME_TO_MAX 45
#define MOUSEKEY_MAX_SPEED 10
/* #define MOUSEKEY_WHEEL_DELAY 0 */
/* #define MOUSEKEY_WHEEL_MAX_SPEED 12 */
/* #define MOUSEKEY_WHEEL_TIME_TO_MAX 12 */
/* #define MOUSEKEY_WHEEL_INTERVAL 20 */

/* #define MK_KINETIC_SPEED */
/* #define MOUSEKEY_DELAY 16 */
/* #define MOUSEKEY_INTERVAL 16 */
/* #define MOUSEKEY_MOVE_DELTA 50 */
/* #define MOUSEKEY_INITIAL_SPEED 25 */
/* #define MOUSEKEY_BASE_SPEED 200 */
/* #define MOUSEKEY_DECELERATED_SPEED 100 */
/* #define MOUSEKEY_ACCELERATED_SPEED 1000 */

/* #define MK_3_SPEED */
/* #define MK_C_INTERVAL_UNMOD 8 */
/* #define MK_C_OFFSET_UNMOD 20 */
/* #define MK_W_INTERVAL_UNMOD 20 */

#define UNICODE_SELECTED_MODES UC_LNX
