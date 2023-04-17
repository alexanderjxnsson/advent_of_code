#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main(){
    std::ifstream myFile;
    std::string line, tree = "#";
    std::string map[11], temp;
int x = 0, result = 0, r = 0;
myFile.open("test.txt");

    while (std::getline(myFile, line)){
        map[r] = line;
        r++;
    }
    int strLength = map[0].length();
    for (int i = 0; i < 11; i++){
        temp = map[i];
        for (int y = 0; y < strLength; i++){
            std::cout << "Row: " << i << " Nr in row: " << x << " Tree: " << temp[x] << std::endl;
            //std::cout << strLength << std::endl;

            if (tree[0] == temp[x]){
                result++;
                x += 3;
                break;
            }
            x += 3;
            if(x >= strLength){
                x = 0;
                break;
            }  
            break;
        }

    }


 

    myFile.close();
    std::cout << "Result: " << result << std::endl;
    return 0;
}