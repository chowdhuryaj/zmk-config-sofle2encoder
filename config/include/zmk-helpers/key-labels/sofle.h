/*
 * sofle.h - key position labels for Sofle w/ dual encoders
 * Source: urob/zmk-helpers (main) for Sofle keymap labels. 
 *
 * Each macro (LN5, LT2, RM3, LH1, RH4, LEC, REC, etc.) maps to a physical
 * switch position index in the ZMK matrix. We'll use these names in
 * behaviors, combos, and layers instead of hardcoding numbers.
 */

#pragma once
#include <dt-bindings/zmk/matrix_transform.h>

/*
 * KEY MATRIX / LAYOUT MAPPING (left half then right half)
 *
 *   LN5 LN4 LN3 LN2 LN1 LN0    RN0 RN1 RN2 RN3 RN4 RN5
 *   LT5 LT4 LT3 LT2 LT1 LT0    RT0 RT1 RT2 RT3 RT4 RT5
 *   LM5 LM4 LM3 LM2 LM1 LM0    RM0 RM1 RM2 RM3 RM4 RM5
 *   LB5 LB4 LB3 LB2 LB1 LB0 LEC REC RB0 RB1 RB2 RB3 RB4 RB5
 *          LH4 LH3 LH2 LH1 LH0    RH0 RH1 RH2 RH3 RH4
 *
 * Notes:
 *  - LEC = left encoder press switch
 *  - REC = right encoder press switch
 */

/* LEFT HAND */
#define LN0 5
#define LN1 4
#define LN2 3
#define LN3 2
#define LN4 1
#define LN5 0

#define LT0 17
#define LT1 16
#define LT2 15
#define LT3 14
#define LT4 13
#define LT5 12

#define LM0 29
#define LM1 28
#define LM2 27
#define LM3 26
#define LM4 25
#define LM5 24

#define LB0 41
#define LB1 40
#define LB2 39
#define LB3 38
#define LB4 37
#define LB5 36

#define LEC 42

#define LH0 54
#define LH1 53
#define LH2 52
#define LH3 51
#define LH4 50

/* RIGHT HAND */
#define RN0 6
#define RN1 7
#define RN2 8
#define RN3 9
#define RN4 10
#define RN5 11

#define RT0 18
#define RT1 19
#define RT2 20
#define RT3 21
#define RT4 22
#define RT5 23

#define RM0 30
#define RM1 31
#define RM2 32
#define RM3 33
#define RM4 34
#define RM5 35

#define REC 43

#define RB0 44
#define RB1 45
#define RB2 46
#define RB3 47
#define RB4 48
#define RB5 49

#define RH0 55
#define RH1 56
#define RH2 57
#define RH3 58
#define RH4 59

/* Convenience groups:
 * KEYS_L = every position you hit with the LEFT hand (used for right-hand mods)
 * KEYS_R = every position you hit with the RIGHT hand (used for left-hand mods)
 *
 * We EXCLUDE the encoder press positions from these groups on purpose,
 * so spinning/clicking a knob doesn’t accidentally trigger "I meant HOLD".
 * That keeps homerow mods clean.
 */

#define KEYS_L < \
    LN5 LN4 LN3 LN2 LN1 LN0 \
    LT5 LT4 LT3 LT2 LT1 LT0 \
    LM5 LM4 LM3 LM2 LM1 LM0 \
    LB5 LB4 LB3 LB2 LB1 LB0 \
    LH4 LH3 LH2 LH1 LH0 \
>

#define KEYS_R < \
    RN0 RN1 RN2 RN3 RN4 RN5 \
    RT0 RT1 RT2 RT3 RT4 RT5 \
    RM0 RM1 RM2 RM3 RM4 RM5 \
    RB0 RB1 RB2 RB3 RB4 RB5 \
    RH0 RH1 RH2 RH3 RH4 \
>
