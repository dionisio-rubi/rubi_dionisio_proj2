#include "FileManager.h"
#include <sstream>

// This function reads the file and calls the necessary classes to perform their duties.
void FileManager::readFile(std::string fileName){
    std::ifstream file;
    file.open(fileName);
    std::string line;
    if(file.is_open()){ // If the file is open, then read the file.
        while(std::getline(file, line)){
            std::istringstream ss(line);
            // The operands are converted to decimal form which will make it easier to perform the operations.
            ss >> oper >> std::hex >> operand1 >> std::hex >> operand2; // The appropriate variables are assigned to the appropriate values.
            if(oper == "ADD"){ // checks the operation and uses the appropriate class to perform the operation.
                AddingHex add(oper, operand1, operand2);
                add.addHex();
                add.getResult();
            }else if(oper == "AND"){
                ANDHex andH(oper, operand1, operand2);
                andH.andHex();
                andH.getResult();
            }else if(oper == "ASR"){
                ASRHex asrH(oper, operand1, operand2);
                asrH.asrHex();
                asrH.getResult();
            }else if(oper == "LSR"){
                LSRHex lsrH(oper, operand1, operand2);
                lsrH.lsrHex();
                lsrH.getResult();
            }else if(oper == "LSL"){
                LSLHex lslH(oper, operand1, operand2);
                lslH.lslHex();
                lslH.getResult();
            }else if(oper == "NOT"){
                NOTHex notH(oper, operand1, operand2);
                notH.notHex();
                notH.getResult();
            }else if(oper == "ORR"){
                ORRHex orrH(oper, operand1, operand2);
                orrH.orrHex();
                orrH.getResult();
            }else if(oper == "SUB"){
                SUBHex subH(oper, operand1, operand2);
                subH.subHex();
                subH.getResult();
            }else if(oper == "XOR"){
                XORHex xorH(oper, operand1, operand2);
                xorH.xorHex();
                xorH.getResult();
            }
        }
    }
    file.close(); // close the file.
}

// Returns the first operand.
uint32_t FileManager::getOperand1(){
    return operand1;
}

// Returns the second operand.
uint32_t FileManager::getOperand2(){
    return operand2;
}

// Returns the keyword.
std::string FileManager::getOper(){
    return oper;
}