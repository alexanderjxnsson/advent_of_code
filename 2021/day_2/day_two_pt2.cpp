#include <iostream>
#include <fstream>
#include <string>

std::ifstream file;
int forwardCount, upCount, downCount, depthCount = 0, answer = 0;
std::string lineDirection, lineValue;

/* 
    down 10:    aim += 10;
    up 5:       aim -= 5;
    forward 5:  forward += 5 && down = aim * 5;

 */

struct submarine{
    std::string direction;
    int distance = 0, aim = 0, horisontalPos = 0, depth = 0;
}tSub;

int main() {
    file.open("input.txt", std::ifstream::in);

    while (getline(file, tSub.direction, ' ')){
        getline(file, lineValue, '\n');
        tSub.distance = stoi(lineValue);
 
        if (tSub.direction == "forward"){
            tSub.horisontalPos += tSub.distance;
            tSub.depth += tSub.aim * tSub.distance;
            //std::cout << "Forward horizontal: " << tSub.horisontalPos << " Depth: " << tSub.depth << std::endl;
        }
        else if (tSub.direction == "down"){
            tSub.aim += tSub.distance;
            //std::cout << "Down aim: " << tSub.aim << std::endl;
        }
        else if (tSub.direction == "up"){
            tSub.aim -= tSub.distance;
            //std::cout << "Up aim: " << tSub.aim << std::endl;
        }
    }

    std::cout << "Final horizontal: " << tSub.horisontalPos << " Final depth: " << tSub.depth << std::endl;
    answer = tSub.horisontalPos * tSub.depth;
    std::cout<<"The answer is: "<<answer<<std::endl;
}
