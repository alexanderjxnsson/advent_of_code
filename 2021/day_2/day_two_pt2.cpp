#include <iostream>
#include <fstream>
#include <string>

std::ifstream file;
int answer = 0;
std::string lineValue;

struct submarine{
    std::string direction;
    int distance = 0, aim = 0, horizontalPos = 0, depth = 0;
}tSub;

int main() {
    file.open("input.txt", std::ifstream::in);

    while (getline(file, tSub.direction, ' ')){
        getline(file, lineValue, '\n');
        tSub.distance = stoi(lineValue);
 
        if (tSub.direction == "forward"){
            tSub.horizontalPos += tSub.distance;
            tSub.depth += tSub.aim * tSub.distance;
        }
        else if (tSub.direction == "down"){
            tSub.aim += tSub.distance;
        }
        else if (tSub.direction == "up"){
            tSub.aim -= tSub.distance;
        }
    }

    std::cout << "Final horizontal: " << tSub.horizontalPos << " Final depth: " << tSub.depth << std::endl;
    answer = tSub.horizontalPos * tSub.depth;
    std::cout<<"The answer is: "<<answer<<std::endl;
}
