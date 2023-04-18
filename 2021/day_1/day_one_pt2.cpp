#include <iostream>
#include <fstream>
#include <string>
#include <vector>

/* std::ifstream file;
std::string line;
int result = 0, sumOfThree = 0;
std::vector<int> inputVector;
std::vector<int> finalVector; */


int main() {
    std::ifstream file;
    std::string line;
    int result = 0, sumOfThree = 0;
    std::vector<int> inputVector;
    std::vector<int> finalVector;
	file.open("input.txt", std::ifstream::in);
    while (getline(file, line, '\n')){
        inputVector.push_back(stoi(line));
    }

    for (int i = 0; i < inputVector.size(); i++){
        sumOfThree = inputVector[i] + inputVector[i+1] + inputVector[i+2];
        std::cout << inputVector[i] << "+" << inputVector[i+1] << "+" << inputVector[i+2] << "=" << sumOfThree << std::endl;

        finalVector.push_back(sumOfThree);
    }

    for (int i = 0; i < finalVector.size(); i++)
    {
        if(finalVector[i] < finalVector[i+1])
            result++;
    }
    
	
    std::cout << "The result is: " << result << std::endl;
}