#include <iostream>
#include <fstream>
#include <vector>
#include <string>

std::ifstream file;
int forwardCount, upCount, downCount, intValue, stringToInt = 0, depthCount = 0, answer = 0;
std::string fileValueString, fileValueInt;
struct submarine{
    std::string direction;
    int distance;
    std::string fileValueString, fileValueInt;
}tSub;

std::vector<submarine> vSub;

int main() {
    file.open("input", std::ifstream::in);

    while (getline(file, fileValueString, ' ')){
        getline(file, fileValueInt, '\n');
        stringToInt = stoi(fileValueInt);
        tSub.direction = fileValueString;
        tSub.distance = stoi(fileValueInt);
        vSub.push_back(tSub);
    }

    for (int i = 0; i < vSub.size(); i++){
        if (vSub[i].direction == "forward"){
            forwardCount += vSub[i].distance;
        }
        else if (vSub[i].direction == "down"){
            downCount += vSub[i].distance;
        }
        else if (vSub[i].direction == "up"){
            upCount += vSub[i].distance;
        }
    }
    
    depthCount = downCount - upCount;
    std::cout<<"Forward total: "<<forwardCount<<std::endl;
    std::cout<<"Depth total: "<<depthCount<<std::endl;
    answer = depthCount * forwardCount;
    std::cout<<"The answer is: "<<answer<<std::endl;
}
