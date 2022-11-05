#include <iostream>
#include <iomanip>
#include <string>

//subtracts the second operand from the first operand and stores the result in the destination register
class SUBHex{
    private:
        std::string keyword; // This will always read (SUB) for this class.
        uint32_t hex1; // First operand
        uint32_t hex2; // Second operand
        uint32_t result; // Result of the subtraction

    public:
        SUBHex(std::string newKeyword, uint32_t newHex1, uint32_t newHex2);
        void subHex();
        void getResult();
        ~SUBHex();
};