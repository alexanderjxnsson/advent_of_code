#include <iostream>
#include <fstream>
#include <string>

std::ifstream file;
int result = 0, mandatory = 0;
std::string passportInfo;
std::string mandatoryValues[7] = {"byr", "iyr", "eyr", "hgt", "hcl", "ecl", "pid"};


int main(){
    file.open("input.txt");

    while(std::getline(file, passportInfo)){

        for (int i = 0; i < 7; i++){
            if(passportInfo.find(mandatoryValues[i]) != std::string::npos){
                mandatory++;
            }
        }

        if(mandatory == 7){
            result++;
            passportInfo = "\0";
        }

        if(passportInfo.size() == 0){
            mandatory = 0;
        }
    }

    std::cout << result << std::endl;
    return 0;
}