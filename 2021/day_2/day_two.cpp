#include <iostream>
#include <fstream>
#include <string>

std::ifstream file;
int depthCount = 0, answer = 0;
std::string lineValue;

struct submarine{
    std::string direction;
    int distance = 0, horizontalPos = 0, depth = 0, up = 0;
}tSub;

int main() {
    file.open("input.txt", std::ifstream::in);

    while (getline(file, tSub.direction, ' ')){
        getline(file, lineValue, '\n');
        tSub.distance = stoi(lineValue);

        if (tSub.direction == "forward"){
            tSub.horizontalPos += tSub.distance;
        }
        else if (tSub.direction == "down"){
            tSub.depth += tSub.distance;
        }
        else if (tSub.direction == "up"){
            tSub.up += tSub.distance;
        }
    }

    depthCount = tSub.depth - tSub.up;
    std::cout<<"Forward total: "<<tSub.horizontalPos<<std::endl;
    std::cout<<"Depth total: "<<depthCount<<std::endl;
    answer = depthCount * tSub.horizontalPos;
    std::cout<<"The answer is: "<<answer<<std::endl;
}
