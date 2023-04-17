#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

std::ifstream myFile;
std::string line;
std::string inputValue;
std::string lowest[1000];
std::string highest[1000];
std::string charToLookFor;
std::string password[1000];
//std::string temp;

int iLowest[1000];
int iHighest[1000];
int numOfChars = 0;
int result = 0;
int totalChars = 0;
int count = 0;

int total = 0;
int i = 0;

int main(){
	myFile.open("test.txt");
	while(std::getline(myFile, line)){
		count = 0;
		int del1 = line.find("-");
		int del2 = line.find(" ");
		int del3 = line.find(":");

		lowest[i] = line.substr(0, del1);
		highest[i] = line.substr(del1 + 1, 2);
		charToLookFor = line.substr(del3 - 1, 1);
		password[i] = line.substr(del3 + 2);

		iLowest[i] = std::stoi(lowest[i]);
		iHighest[i] = std::stoi(highest[i]);
		numOfChars = iHighest[i] - iLowest[i];		
		std::string temp = password[i];

		/* for (int i = 0; (i = temp.find(charToLookFor, i)) != std::string::npos; i++) {
        	count++;
			if ((count <= numOfChars) && (count >= numOfChars)){
				result++;
			}
			
		} */
		count = std::count(temp.begin(), temp.end(), charToLookFor);
		if ((count <= numOfChars) && (count >= numOfChars))
				result++;

		i++;
	}
	std::cout<< total << std::endl;
	std::cout<< "The result is: " << result << std::endl;

	return 0;
}