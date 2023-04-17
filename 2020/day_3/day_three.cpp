#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::ifstream myFile;
std::string line, tree = "#";
std::string map[323], temp;

int x = 0, result = 0, r = 0;

int main(){
    myFile.open("input.txt");

    while (std::getline(myFile, line)){
        map[r] = line;
        r++;
    }
    int strLength = map[0].length();
    for (int i = 0; i < 323; i++){
        temp = map[i];
        for (int i = 0; i < strLength; i++){   
            if (tree[0] == temp[x]){
                result++;
                break;
            }
                
            if(x >= strLength){
                x = 0;
                break;
            }
            x += 3;
        }
        
    }
    

    myFile.close();
    std::cout << "Result: " << result << std::endl;
    return 0;
}