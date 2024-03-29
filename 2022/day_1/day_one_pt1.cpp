#include <iostream>
#include <fstream>
#include <string>

std::ifstream myFile;
std::string line;
bool bFile = true, bCount = false;
int bestElf = 0, kcal = 0, prevElf = 0;

int main(){
    myFile.open("input.txt");
    
    while (std::getline(myFile, line)){
        if (line != ""){
            kcal += std::stoi(line);
            prevElf = kcal;
        }
        else if (line == ""){
            kcal = 0;
        }
        
        if (prevElf > bestElf){
            bestElf = prevElf;
        }
    }
    myFile.close();
    std::cout<<"The best elf carries: "<<bestElf<<std::endl;
    return 0;   
}