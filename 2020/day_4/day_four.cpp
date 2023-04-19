/* 
    byr (Birth Year)
    iyr (Issue Year)
    eyr (Expiration Year)
    hgt (Height)
    hcl (Hair Color)
    ecl (Eye Color)
    pid (Passport ID)
    cid (Country ID)
 */

#include <iostream>
#include <fstream>
#include <string>

int result = 0, mandatory = 0;
std::ifstream file;
std::string line, passport;
std::string mandatoryValues[7] = {"byr", "iyr", "eyr", "hgt", "hcl", "ecl", "pid"};



int main(){
    file.open("input.txt");

    while(std::getline(file, line)){
        passport += line;

        if(line.size() == 0){
            for (int i = 0; i < 7; i++){
                if(passport.find(mandatoryValues[i]) != std::string::npos){
                    mandatory++;
                }
            }
            if(mandatory == 7){
                result++;
            }
            else{
                mandatory = 0;
                passport = "\0";
            }
        }
    }

    std::cout << result << std::endl;
    return 0;
}