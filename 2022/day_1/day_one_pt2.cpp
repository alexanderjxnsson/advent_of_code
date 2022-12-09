#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

std::vector<int> elfVector;
int topThreeElfs;
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
            elfVector.push_back(prevElf);
        }
        else if (line == ""){
            kcal = 0;
        }
        
        if (prevElf > bestElf){
            bestElf = prevElf;
        }
    }
    myFile.close();
    std::sort(elfVector.begin(), elfVector.end(), std::greater<int>());
    topThreeElfs = elfVector[0] + elfVector[1] + elfVector[2];
    std::cout<<"The top three elf carries: "<<topThreeElfs<<std::endl;
    return 0;   
}