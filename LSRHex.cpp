#include "LSRHex.h"

// Constructor: assigns the values of the operands and the keyword (LSR) to use in this class to LSR.
LSRHex::LSRHex(std::string newKeyword, uint32_t newHex1, uint32_t newHex2){
    keyword = newKeyword;
    hex1 = newHex1;
    hex2 = newHex2;
}

// Does the actual LSR, in this the numbers are in LSRed in decimal form.
void LSRHex::lsrHex(){
    int h2 = hex2;
    result = hex1 >> h2;
}

// Prints out the result. When printing, all the numbers are converted back to hex as displayed as such.
void LSRHex::getResult(){
    std::cout << std::hex << keyword << std::setw(6) << "0x" << hex1 << std::setw(12) << "" << hex2 << std::setw(12) << "Result: 0x" << result << std::endl;
}

// Destructor: does nothing.
LSRHex::~LSRHex() = default;