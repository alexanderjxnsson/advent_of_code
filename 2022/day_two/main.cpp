#include <iostream>
#include <fstream>
#include <string>
int top3[3] = {};
std::ifstream myFile;
std::string line;
bool bFile = true, bCount = false;
int bestElf = 0, kcal = 0, prevElf = 0;

int main(){
    myFile.open("file.txt");
    
    while (std::getline(myFile, line)){
        if (line != ""){
            kcal += std::stoi(line);
            prevElf = kcal;
        }
        else if (line == ""){
            kcal = 0;
        }
        
        bestElf = prevElf;
        for (int i = 0; i < 3; i++){
            if (prevElf > bestElf){
                top3[i] = bestElf;
            }
        }
    }
    myFile.close();
    std::cout<<"The best elf carries: "<<bestElf;
    return 0;   
}