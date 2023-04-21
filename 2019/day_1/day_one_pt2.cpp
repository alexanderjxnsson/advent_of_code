#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

std::ifstream file;
std::string fuel;
int iFuel = 0, result = 0;

int main(){
    file.open("input.txt", std::ifstream::in);

    while(std::getline(file, fuel)){
        iFuel = std::stoi(fuel);
        result += std::floor(iFuel / 3 - 2);
    }
    
    std::cout << "Result: " << result << std::endl;

    return 0;
}