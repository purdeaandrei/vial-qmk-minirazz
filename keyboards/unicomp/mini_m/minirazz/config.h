/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define DEF_SERIAL_NUMBER "purdea.ro:minirazz"

#ifndef SERIAL_NUMBER
#define SERIAL_NUMBER DEF_SERIAL_NUMBER
#endif

#define MATRIX_ROWS 12
#define MATRIX_COLS 16

#define SOLENOID_PIN GP25
#define HAPTIC_ENABLE_PIN GP23
#define SOLENOID_DEFAULT_DWELL 20
#define SOLENOID_MIN_DWELL 4
#define HAPTIC_OFF_IN_LOW_POWER 1
#define NO_HAPTIC_MOD

#define WEAR_LEVELING_LOGICAL_SIZE 16384
#define WEAR_LEVELING_BACKING_SIZE (WEAR_LEVELING_LOGICAL_SIZE * 2)

// with eager debouncing the default is not good enough:
#define DEBOUNCE 10
#define DEGHOST_ADVANCED
