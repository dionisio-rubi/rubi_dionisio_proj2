#include <iostream>
#include <iomanip>
#include <string>

class AddingHex {
    private:
        std::string keyword; // This will always read (ADD) for this class.
        uint32_t hex1; // First operand
        uint32_t hex2; // Second operand
        uint32_t result; // Result of the addition

    public:
        AddingHex(std::string newKeyword, uint32_t newHex1, uint32_t newHex2);
        void addHex();
        void getResult();
        ~AddingHex();
};