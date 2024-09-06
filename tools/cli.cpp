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
*   Name: cli.cpp
*   Authors: Ben Daws <ben@bendaws.net>
*   Description: The head of the compiler
***************************/

#include <c--/cminusminus.h> // INSTALL C-- BEFORE USING THE BINS!
#include "bins.hpp"
#include <iostream>

extern char* version; // from ../compiler/cminusminus.h
extern std::string binversion; // from bins.hpp

int main(int argc, char *argv) {
    // Checks argv for flags
    char *flag1 = argv[1];

    switch (flag1) {
        case "--version":
            std::cout << "C-- utils version " << binversion << std::endl;
            std::cout << "C-- compiler version " << version << std::endl;
            std::cout << "\nprogram>  Copyright (C) <year>  <name of author>\n";
            std::cout << "This program comes with ABSOLUTELY NO WARRANTY;\n";
            std::cout << "This is free software, and you are welcome to redistribute it\n";
            std::cout << "under certain conditions. See 'c-- --license' for the license.\n";
            break;
        case "--license":
            std::cout << "Please visit https://www.gnu.org/licenses for the GNU GPL V3 License.\n";
            break;
        default:
            std::cout << "Invalid flag given. See cmm --help.\n";
    }
}