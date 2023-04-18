#include <iostream>
#include <fstream>
#include <string>

std::ifstream myFile;
std::string line;
std::string inputValue;
std::string lowest;
std::string highest;
std::string charToLookFor;
std::string password;

int iLowest;
int iHighest;
int numOfChars = 0;
int result = 0;
int totalChars = 0;
int count = 0;
int strLen = 0;

int main(){
	myFile.open("input.txt");
	while(std::getline(myFile, line)){
		count = 0;
		int del1 = line.find("-");
		int del2 = line.find(" ");
		int del3 = line.find(":");

		iLowest = std::stoi(line.substr(0, del1));
		iHighest = std::stoi(line.substr(del1 + 1, 2));
		charToLookFor = line.substr(del3 - 1, 1);
		password = line.substr(del3 + 2);
		
		numOfChars = iHighest - iLowest;		
		strLen = password.length();

		for (int x = 0; x < strLen; x++){
			if(charToLookFor[0] == password[x])
				count++;
			}

		if (count >= iLowest && count <= iHighest){
				result++;
		}
	}
	std::cout<< "The result is: " << result << std::endl;
	
	myFile.close();
	return 0;
}