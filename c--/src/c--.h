/********************************************************************
*   C-- compiler
*   Copyright (C) 2024 Ben Daws.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   If you did not receive a copy of the GNU General Public License v3,
*   see <https://www.gnu.org/licenses>.
********************************************************************/

/***************************
*   Name: cminusminus.h
*   Authors: Ben Daws <ben@bendaws.net>
*   Description: Header file for C-- compiler
***************************/

// std
#include <stdio.h>
#include <stdlib.h>

// local includes
#include "parse.h"

char* CMM_VERSION = "0.0.1-beta" // Call using "extern char* version" while importing cminusminus.h