#include <iostream>
#include <iomanip>
#include <string>

class NOTHex{
    private:
        std::string keyword; // This will always read (NOT) for this class.
        uint32_t hex1; // First operand
        uint32_t hex2; // Second operand
        int32_t result; // Result of the NOT

    public:
        NOTHex(std::string newKeyword, uint32_t newHex1, uint32_t newHex2);
        void notHex();
        void getResult();
        ~NOTHex();
};