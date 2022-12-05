#include <iostream>
#include <fstream>
#include <string>

std::ifstream myFile;
std::string line;
bool bFile = true, bCount = false;
int bestElf = 0, kcal = 0, prevElf = 0, bestElfnumber = 0;

int main(){
    myFile.open("file.txt");
    
    while (std::getline(myFile, line)){
        std::cout<<line<<std::endl;
        kcal = std::stoi(line);
        kcal += kcal;
        prevElf = kcal;
        if (prevElf > bestElf){
            bestElf = prevElf;
        }
        kcal = 0;
    }
    myFile.close();
    std::cout<<"The best elf carries: "<<bestElf;
    return 0;   
}