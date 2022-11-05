#include "NOTHex.h"

// Constructor: assigns the values of the operands and the keyword (NOT) to use in this class to NOT.
NOTHex::NOTHex(std::string newKeyword, uint32_t newHex1, uint32_t newHex2){
    keyword = newKeyword;
    hex1 = newHex1;
    hex2 = newHex2;
}

// Does the actual NOT, in this the numbers are in NOTed in decimal form.
void NOTHex::notHex(){
    result = ~hex1;
}

// Prints out the result. When printing, all the numbers are converted back to hex as displayed as such.
void NOTHex::getResult(){
    std::cout << std::hex << keyword << std::setw(6) << "0x" << hex1 << std::setw(12) << "" << std::setw(12) << "Result: 0x" << result << std::endl;
}

// Destructor: does nothing.
NOTHex::~NOTHex() = default;