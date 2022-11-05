#include "CMDHex.h"

// Constructor: assigns the values of the operands and the keyword to use in this class.
CMDHex::CMDHex(std::string newKeyword, uint32_t newHex1, uint32_t newHex2){
    keyword = newKeyword;
    hex1 = newHex1;
    hex2 = newHex2;
}

// Does the ADD operation, in this the numbers are in added in decimal form.
void CMDHex::addHex(){
    result = hex1 + hex2;
}

// Does the actual anding, in this the numbers are in anded in decimal form.
void CMDHex::andHex(){
    result = hex1 & hex2;
}

// Does the actual ASR, in this the numbers are in ASRed in decimal form.
void CMDHex::asrHex(){
    int h2 = hex2;
    int32_t h1 = hex1;
    result = h1 >> h2;
}

// Does the actual LSR, in this the numbers are in LSRed in decimal form.
void CMDHex::lsrHex(){
    int h2 = hex2;
    result = hex1 >> h2;
}

// Does the actual LSL, in this the numbers are in LSLed in decimal form.
void CMDHex::lslHex(){
    int h2 = hex2;
    result = hex1 << h2;
}

// Does the actual NOT, in this the numbers are in NOTed in decimal form.
void CMDHex::notHex(){
    result = ~hex1;
}

// Does the actual subtraction, in this the numbers are subtracted in decimal form.
void CMDHex::subHex(){
    result = hex1 - hex2;
}

// Does the actual orring, in this the numbers are in anded in decimal form.
void CMDHex::orrHex(){
    result = hex1 | hex2;
}

// Does the actual XOR, in this the numbers are in XORd in decimal form.
void CMDHex::xorHex(){
    result = hex1 ^ hex2;
}

// Prints out the result of the operation. When printing, all the numbers are converted back to hex as displayed as such.
void CMDHex::getResult(){
    if(keyword == "LSR" || keyword == "ASR" || keyword == "LSL"){
        std::cout << std::hex << keyword << std::setw(6) << "0x" << hex1 << std::setw(12) << "" << hex2 << std::setw(12) << "Result: 0x" << result << std::endl;
    }else if(keyword == "NOT"){
        std::cout << std::hex << keyword << std::setw(6) << "0x" << hex1 << std::setw(12) << "" << std::setw(12) << "Result: 0x" << result << std::endl;
    }else{
        std::cout << std::hex << keyword << std::setw(6) << "0x" << hex1 << std::setw(12) << "0x" << hex2 << std::setw(12) << "Result: 0x" << result << std::endl;
    }
}

// Destructor: does nothing.
CMDHex::~CMDHex() = default;