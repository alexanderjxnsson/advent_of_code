#include <iostream>
#include <fstream>
#include <string>
#include <regex>

std::ifstream myFile;
std::string line;
const std::regex r("(\\d).*?(\\d)");
int result = 0;

int main(){
    myFile.open("test.txt");
    
    while (std::getline(myFile, line)){
        std::smatch matches;
        if (std::regex_search(line, matches, r)) {
            std::string match = matches[1].str() + matches[2].str(); //get the matched string
            result += std::stoi(match); //convert the string to Integer and add it to the result
        }
    }
    myFile.close();
    std::cout<<"The result is: "<<result<<std::endl;
    return 0;
}