#include <iostream>
#include <iomanip>
#include <string>

class ORRHex{
    private:
        std::string keyword; // This will always read (ORR) for this class.
        uint32_t hex1; // First operand
        uint32_t hex2; // Second operand
        uint32_t result; // Result of the ORR

    public:
        ORRHex(std::string newKeyword, uint32_t newHex1, uint32_t newHex2);
        void orrHex();
        void getResult();
        ~ORRHex();
};