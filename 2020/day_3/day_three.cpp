#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::ifstream myFile;
std::string line, tree = "#";
std::string map[323], temp;

int x = 0, result = 0, r = 0;

int main(){
    myFile.open("test.txt");

    while (std::getline(myFile, line)){
        map[r] = line;
        r++;
    }
    int strLength = map[0].length();
    for (int i = 0; i < 323; i++){
        temp = map[i];
        for (int i = 0; i < strLength; i++){   
            x += 3;
            if (tree[0] == temp[x])
                result++;
        }
        if(x >= line.size())
            x = 0;
    }
    

    myFile.close();
    std::cout << "Result: " << result << std::endl;
    return 0;
}