#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

// https://github.com/watmough/Advent-of-Code-2018/blob/master/day_02.cpp

std::ifstream file;
std::vector<std::string> vString;
int result = 0, twos = 0, threes = 0;
bool twoFound = false, threeFound = false;

int main(){std::string line;
    file.open("input.txt", std::ifstream::in);

    while(std::getline(file, line)){
        vString.push_back(line);
    }
    
    for ( auto l : vString){
        twoFound = false, threeFound = false;
        auto u = std::set<char>(begin(l), end(l));
        for(auto c : u){
            if (count(begin(l),end(l),c)==2) twoFound=true;
            if (count(begin(l),end(l),c)==3) threeFound=true;
        }
        twoFound && twos++;
        threeFound && threes++;
    }

    std::cout<< "Result: " << (twos*threes) << std::endl;

    return 0;
}