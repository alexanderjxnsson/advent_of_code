#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

std::ifstream file;

int main(){
    file.open("input.txt", std::ifstream::in);
    
    std::string line;
    int result = 0;

    while(std::getline(file, line)){
        if(line[0] == '+')
            result += std::stoi(line.substr(1, line.length()-1));
        else if(line[0] == '-')
            result -= std::stoi(line.substr(1, line.length()-1));
    }
    std::cout << "Result: " << result << std::endl;

    return 0;
}