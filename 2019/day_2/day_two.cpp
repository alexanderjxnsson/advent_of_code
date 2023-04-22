#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

std::ifstream file;
std::string line;
int result = 0;

int main(){
    file.open("input.txt", std::ifstream::in);


    while(std::getline(file, line)){

    }
    std::cout << "Result: " << result << std::endl;

    return 0;
}