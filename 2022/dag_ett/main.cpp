#include <iostream>
#include <fstream>
#include <string>
//std::ofstream myFile;
std::ifstream myFile;
std::string line;
bool bFile = true, bCount = false;
int bestElf = 0, kcal = 0, prevElf = 0;
void fileOK();

int main(){
    while (bFile == true){
            myFile.open("file.txt");
        if (myFile.is_open()){
            std::cout<<"File is OK\n";
            bCount = true;
            bFile = false;
        }
        else{
            std::cout<<"File is not OK\n";
            return 0;
        }
    }
    
    while (bCount == true){
        while (std::getline(myFile, line))
        {
            kcal += std::stoi(line);
            if (line == "\n"){
                prevElf = kcal;
                kcal = 0;
                if (){
                    
                }
            }
        }
    }

    return 0;   
}

void fileOK(){
    
}