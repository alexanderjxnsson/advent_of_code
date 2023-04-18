#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#define ROCK_OP     "A"
#define PAPER_OP    "B"
#define SCISS_OP    "C"

#define ROCK_ME     "X"
#define PAPER_ME    "Y"
#define SCISS_ME    "Z"

std::ifstream myFile;
std::string opponent, me, line;
bool bFile = true, bCount = false;
uint32_t my_score = 0;
/*  Points:
        1 Rock
        2 Paper
        3 Scissors
        3 Draw
        6 Win */
int main(){
    myFile.open("input.txt");
    
    while (std::getline(myFile, line)){
        opponent = line.at(0);
        me = line.at(2);
        // LOSS
        if(me == ROCK_ME && opponent == PAPER_OP){
            my_score += 1;
        }
        else if(me == PAPER_ME && opponent == SCISS_OP){
            my_score += 2;
        }
        else if(me == SCISS_ME && opponent == ROCK_OP){
            my_score += 3;
        }
        // DRAW
        if(me == ROCK_ME && opponent == ROCK_OP){
            my_score += (1 + 3);
        }
        if(me == PAPER_ME && opponent == PAPER_OP){
            my_score += (2 + 3);
        }
        if(me == SCISS_ME && opponent == SCISS_OP){
            my_score += (3 + 3);
        }
        // WIN
        if(me == ROCK_ME && opponent == SCISS_OP){
            my_score += (1 + 6);
        }
        if(me == PAPER_ME && opponent == ROCK_OP){
            my_score += (2 + 6);
        }
        if(me == SCISS_ME && opponent == PAPER_OP){
            my_score += (3 + 6);
        }
    }
    myFile.close();
    std::cout<<"My score is: "<<my_score<<std::endl;
    return 0;   
}