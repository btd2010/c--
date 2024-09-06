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
*   Name: cli.c
*   Authors: Ben Daws <ben@bendaws.net>
*   Description: The head of the compiler
***************************/

#include <c--/c--.h> // INSTALL C-- BEFORE USING THE BINS!
#include "bins.h"
#include <stdio.h>
#include <stdlib.h>

extern char* CMM_VERSION; // from ../compiler/c--.h
extern std::string CMM_VERSION_BIN; // from bins.hpp

int main(int argc, char *argv) {
    // Make sure tools / comp version are the same
    if (CMM_VERSION != CMM_VERSION_BIN) { std::cout << "Your C-- compiler version and toolchain version are not the same. Please upgrade the C-- Compiler to version " << CMM_VERSION_BIN << ".\n"; }
    // Checks argv for flags
    char *flag1 = argv[1];

    switch (flag1) {
        case "--version":
            printf("C-- utils version %s\n", CMM_VERSION_BIN);
            printf("C-- version %s\n", CMM_VERSION);
            printf("\nC--  Copyright (C) 2024  Ben Daws.\n");
            printf("This program comes with ABSOLUTELY NO WARRANTY;\n");
            printf("This is free software, and you are welcome to redistribute it\n");
            printf("under certain conditions. See 'c-- --license' for the license.\n");
            break;
        case "--license":
            printf("Please visit https://www.gnu.org/licenses for the GNU GPL V3 License.\n");
            break;
        default:
            printf("Invalid flag given. See cmm --help.\n");
            break;
    }
}