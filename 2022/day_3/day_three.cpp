#include <iostream>
#include <fstream>
#include <string>

std::ifstream myFile;
std::string line, splitLine;
int length;
int main(){
	myFile.open("file.txt");

	while (std::getline(myFile, line)){
		length = line.size();
	}
	
	myFile.close();
	return 0;
}
