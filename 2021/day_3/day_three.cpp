#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::ifstream file;

int main() {
    int countOne = 0, countZero = 0, iGamma = 0, iEpsilon = 0, result = 0;
    std::string binary, gamma, epsilon;
    std::vector<std::string> vBinary;
    file.open("input.txt", std::ifstream::in);

    while(getline(file, binary)){
        vBinary.push_back(binary);
    }
    file.close();

    for (int i = 0; i < vBinary[0].length(); i++){
        for (int j = 0; j < vBinary.size(); j++){
            if(vBinary[j].at(i) == '1')
                countOne++;
            else if(vBinary[j].at(i) == '0')
                countZero++;
        }
        if(countOne > countZero){
            countOne = 0;
            countZero = 0;
            gamma += '1';
            epsilon += '0';
        }
            
        if(countZero > countOne){
            countOne = 0;
            countZero = 0;
            gamma += '0';
            epsilon += '1';
        }
    }
    
    iGamma = std::stoi(gamma, 0, 2);
    iEpsilon = std::stoi(epsilon, 0, 2);
    result = iGamma * iEpsilon;
    std::cout << "result: " << result << std::endl;
    
    return 0;
}
