#include "SUBHex.h"

// Constructor: assigns the values of the operands and the keyword (SUB) to use in this class to subtract.
SUBHex::SUBHex(std::string newKeyword, uint32_t newHex1, uint32_t newHex2){
    keyword = newKeyword;
    hex1 = newHex1;
    hex2 = newHex2;
}

// Does the actual subtraction, in this the numbers are subtracted in decimal form.
void SUBHex::subHex(){
    result = hex1 - hex2;
}

// Prints out the result of the subtraction. When printing, all the numbers are converted back to hex as displayed as such.
void SUBHex::getResult(){
    std::cout << std::hex << keyword << std::setw(6) << "0x" << hex1 << std::setw(12) << "0x" << hex2 << std::setw(12) << "Result: 0x" << result << std::endl;
}

// Destructor: does nothing.
SUBHex::~SUBHex() = default;