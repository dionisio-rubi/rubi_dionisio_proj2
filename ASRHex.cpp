#include "ASRHex.h"

// Constructor: assigns the values of the operands and the keyword (ASR) to use in this class to ASR.
ASRHex::ASRHex(std::string newKeyword, uint32_t newHex1, uint32_t newHex2){
    keyword = newKeyword;
    hex1 = newHex1;
    hex2 = newHex2;
}

// Does the actual ASR, in this the numbers are in ASRed in decimal form.
void ASRHex::asrHex(){
    int h2 = hex2;
    int32_t h1 = hex1;
    result = h1 >> h2;
}

// Prints out the result. When printing, all the numbers are converted back to hex as displayed as such.
void ASRHex::getResult(){
    std::cout << std::hex << keyword << std::setw(6) << "0x" << hex1 << std::setw(12) << "" << hex2 << std::setw(12) << "Result: 0x" << result << std::endl;
}

// Destructor: does nothing.
ASRHex::~ASRHex() = default;