#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

std::ifstream myFile;
std::string line;
std::vector<int> numVector;

int result = 0;

int inputValue = 0;

int main(){
	myFile.open("input.txt");

	while(std::getline(myFile, line)){
		if(line != "\n"){
			numVector.push_back(std::stoi(line));
		}
	}
	unsigned int vecSize = numVector.size();

	for(unsigned int x = 0; x < vecSize; x++){
		for (int i = 0; i < vecSize; ++i){
			result = numVector[x] + numVector[i];
			if (result == 2020){
				result = numVector[i] * numVector[x];
				std::cout<<"The result is: " << result << std::endl;
			}
		}
	}

	myFile.close();
	return 0;
}
