#include <string>
#include <iostream>
#include <fstream>

#include "AddingHex.h"
#include "ANDHex.h"
#include "ASRHex.h"
#include "LSRHex.h"
#include "LSLHex.h"
#include "NOTHex.h"
#include "ORRHex.h"
#include "SUBHex.h"
#include "XORHex.h"

class FileManager {
    private:
        uint32_t operand1; // First operand
        uint32_t operand2; // Second operand
        std::string oper; // The keyword that is used to determine what operation to perform.
    public:
        void readFile(std::string fileName);
        uint32_t getOperand1();
        uint32_t getOperand2();
        std::string getOper();
};