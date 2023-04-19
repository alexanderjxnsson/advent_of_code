#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::ifstream file;
std::string line;
int i = 0, zeroCounter = 0, oneCounter = 0, gammaRateResult = 0, epsilonRateResult = 0, totalLines = 0;
std::vector<std::string> vBinary, vGamma, vEpsilon;

int main() {
    file.open("test.txt", std::ifstream::in);
    while(getline(file, line)){
        vBinary.push_back(line);
        totalLines++;
    }
    
    file.close();
}
