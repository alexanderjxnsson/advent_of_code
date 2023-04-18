#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::ifstream file;
std::string line;
int depthValue, measurementCounter = 0;
std::vector<int> inputVector;


int main() {
	file.open("input.txt", std::ifstream::in);
    if (file.is_open()){
        while (getline(file, line, '\n')){
            depthValue = stoi(line);
            inputVector.push_back(depthValue);
        }
    }

    for (int i = 0; i < inputVector.size(); i++){
        if (inputVector[i] < inputVector[i+1]){
            measurementCounter++;
        }
    }
	
    std::cout<<measurementCounter<<std::endl;
}