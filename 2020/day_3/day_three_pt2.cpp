#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main(){
    std::ifstream myFile;
    std::string line, tree = "#";
    std::string map[323], temp;
    int x = 0, result = 0, r = 0, rest = 0;
    myFile.open("input.txt");

    while (std::getline(myFile, line)){
        map[r] = line;
        r++;
    }
    myFile.close();

    int strLength = map[0].length();
    for (int i = 0; i < 323; i++){
        temp = map[i];
        for (int y = 0; y < strLength; i++){
            if (tree[0] == temp[x]){
                result++;
                x += 3;
                if(x >= strLength){
                    rest = x % 31;
                    x = 0;
                    x += rest;
                }
                break; 
            }
            x += 3;
            if(x >= strLength){
                rest = x % 31;
                x = 0;
                x += rest;
            }
            break;
        }

    }

    
    std::cout << "Result: " << result << std::endl;
    return 0;
}