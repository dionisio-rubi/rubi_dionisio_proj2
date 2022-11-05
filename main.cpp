#include <iostream>
#include "FileManager.h"

int main() {
    // All of the output is handled within the filemanager class as the filemanager class calls the necessary classes to perform their duties.
    FileManager addHEX;
    addHEX.readFile("Programming-Project-2.txt");
    return 0;
};