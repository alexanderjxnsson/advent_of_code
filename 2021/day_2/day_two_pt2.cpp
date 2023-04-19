#include <iostream>
#include <fstream>
#include <string>

std::ifstream file;
int forwardCount, upCount, downCount, depthCount = 0, answer = 0;
std::string lineDirection, lineValue;

struct submarine{
    std::string direction;
    int distance;
}tSub;

int main() {
    file.open("input.txt", std::ifstream::in);

    while (getline(file, lineDirection, ' ')){
        getline(file, lineValue, '\n');
        tSub.direction = lineDirection;
        tSub.distance = stoi(lineValue);

        if (tSub.direction == "forward"){
            forwardCount += tSub.distance;
        }
        else if (tSub.direction == "down"){
            downCount += tSub.distance;
        }
        else if (tSub.direction == "up"){
            upCount += tSub.distance;
        }
    }

    depthCount = downCount - upCount;
    std::cout<<"Forward total: "<<forwardCount<<std::endl;
    std::cout<<"Depth total: "<<depthCount<<std::endl;
    answer = depthCount * forwardCount;
    std::cout<<"The answer is: "<<answer<<std::endl;
}
