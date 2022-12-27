/*
Copyright 2022 Sam Thorpe and Nick Chartrand

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

bastardkb/skeletyl/splinky_3
crkbd
*/

#pragma once

#include "config_common.h"

// Matrix Definition
#define MATRIX_ROWS 8
#define MATRIX_COL 6 

// Board Wiring
#define MATRIX_ROW_PINS \
    {GP4, GP5, GP6, GP7} // 
#define MATRIX_COL_PINS \
    {GP29, GP28, GP27, GP26, GP18, GP20}
#define DIODE_DIRECTION COL2ROW // CHECK AGAIN

// Additional Settings
#define SOFT_SERIAL_PIN GP1 // Serial Config.
#define DEBOUNCE 5 

#define SPLIT_USB_DETECT