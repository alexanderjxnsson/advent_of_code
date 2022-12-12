#include <iostream>
#include <fstream>
#include <vector>
#include <string>

std::vector<int> inputVector;
std::ifstream myFile;
std::string line;
int measurementCounter = 0;

int main(){
	myFile.open("file.txt");
	
	while (std::getline(myFile, line));{
		inputVector.push_back(std::stoi(line));
	}
	myFile.close();

	for (int i = 1; i < inputVector.size(); i++){
		if (inputVector[i-1] < inputVector[i]){
			measurementCounter++;
		}
	}
	
	std::cout<<"Number of measuerments: "<<measurementCounter<<std::endl;
	return 0;
}