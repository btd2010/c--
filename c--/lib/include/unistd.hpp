
/*
* UNISTD.H
* btd2010/h-hpp/unistd
* (C) 2024 Ben Daws
*
* WHAT IS THIS: A unified output system to make understanding logs much easier.
* WHY: A mess of different outputs from different programs make it hard to find where, how, and why.
* HOW TO USE: Import "unistd.h" or "unistd.hpp" into your project.
*
* DEPENDENCIES:
*    - C: <stdio.h>
*    - C++: <iostream>
*/

void log(char* file, char* output) {
  // EDIT THIS TO DISPLAY YOUR PROGRAM'S NAME!
  char* program = "c--"; // Please make it all caps
  // Usage: log("EXAMPLEFILE.C", "hello world")

  std::cout << "[" << program << "::" << file << "]: " << output << std::endl);
}

void print(char* file, char* output) {
  log(file, output); // just a shortcut lol, ignore
}
