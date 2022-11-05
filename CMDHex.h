#include <iostream>
#include <iomanip>
#include <string>

class CMDHex {
    private:
        std::string keyword; // This will be the cooresponding operator for this class.
        uint32_t hex1; // First operand
        uint32_t hex2; // Second operand
        uint32_t result; // Result of the operation

    public:
        CMDHex(std::string newKeyword, uint32_t newHex1, uint32_t newHex2);
        void addHex();
        void andHex();
        void asrHex();
        void lsrHex();
        void lslHex();
        void notHex();
        void orrHex();
        void subHex();
        void xorHex();
        void getResult();
        ~CMDHex();
};