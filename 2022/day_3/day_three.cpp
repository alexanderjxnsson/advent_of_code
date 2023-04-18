#include <iostream>
#include <fstream>
#include <string>

std::ifstream myFile;
std::string line, splitOne, splitTwo;
int prio = 0, i, j, length;

int main(){
	myFile.open("input.txt");

	while (std::getline(myFile, line)){
		int strLength = line.size();
		splitOne = line.substr(0, strLength / 2);
		splitTwo = line.substr(strLength / 2, strLength);

		for(i = 0; i <= strLength / 2; i++){
			for(j = 0; j <= strLength / 2; j++){
				if(splitOne[i] == splitTwo[j]){
					if(splitOne[i] < 'a'){
						prio += splitOne[i] - 'A' + 27;
					}
					else{
						prio += splitOne[i] - 'a' + 1;
					}
					i = strLength / 2;
					j = strLength / 2;
				}
			}
		}
	}

	myFile.close();
	std::cout<<"The score is: "<<prio<<std::endl;
	
	return 0;
}
