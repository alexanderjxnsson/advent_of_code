#include <iostream>
#include <fstream>
#include <string>

std::ifstream file;
std::string line, splitOne, splitTwo;
int result = 0, line_1 = 0, line_2 = 0, line_3 = 0, line_4 = 0;

int main(){
    file.open("input.txt");

    while (std::getline(file, line)){
        
    }

    std::cout<<"The result is: "<<result<<std::endl;
    file.close();
    return 0;
}