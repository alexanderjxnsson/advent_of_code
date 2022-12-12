#include <iostream>
#include <fstream>
#include <string>
#include <vector>
std::ifstream fin;
std::ofstream fout;
std::string fileName = "file.txt", line;
int depthValue, measurementCounter = 0;
std::vector<int> inputVector;


int main() {
	fin.open(fileName, std::ifstream::in);
    if (fin.is_open()){
        while (getline(fin, line, '\n')){
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