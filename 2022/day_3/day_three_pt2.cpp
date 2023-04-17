#include <iostream>
#include <fstream>
#include <string>

std::ifstream myFile;
std::string line, splitOne, splitTwo;
int prio = 0, i, x, strLength, length;

int main(){
	myFile.open("file.txt");

	while (std::getline(myFile, line)){
		strLength = line.size();
		
		for(i = 0; i <= strLength / 2; i++){
			for(x = 0; x <= strLength / 2; x++){
				if(splitOne[i] == splitTwo[x]){
					if(splitOne[i] < 'a'){
						prio += splitOne[i] - 'A' + 27;
					}
					else{
						prio += splitOne[i] - 'a' + 1;
					}
					i = strLength / 2;
					x = strLength / 2;
				}
			}
		}
	}

	
	std::cout<<"The score is: "<<prio<<std::endl;
	myFile.close();
	return 0;
}
