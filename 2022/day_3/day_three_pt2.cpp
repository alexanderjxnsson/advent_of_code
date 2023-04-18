#include <iostream>
#include <fstream>
#include <string>

std::ifstream myFile;
std::string line1, line2, line3;
int prio = 0, i, j, k;


int main(){
	myFile.open("input.txt");

	while (std::getline(myFile, line1) && std::getline(myFile, line2) && std::getline(myFile, line3)){
		for(i = 0; i <= line1.size(); i++){
			for(j = 0; j <= line2.size(); j++){
				for(k = 0; k <= line3.size(); k++){
					if((line1[i] == line2[j]) && (line2[j] == line3[k])){
						if(line1.at(i) < 'a'){
							prio += line1.at(i) - 'A' + 27;
						}
						else{
							prio += line1.at(i) - 'a' + 1;
						}

						i = line1.size();
						j = line2.size();
						k = line3.size();
					}	
				}		
			}
		}
	}
	
	myFile.close();
	std::cout<<"The score is: "<<prio<<std::endl;
	return 0;
}
