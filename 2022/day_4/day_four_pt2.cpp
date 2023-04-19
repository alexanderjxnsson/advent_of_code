#include <iostream>
#include <fstream>
#include <string>

std::ifstream file;
std::string column1, column2;
int result = 0, line_1 = 0, line_2 = 0, line_3 = 0, line_4 = 0;
std::pair<int, int> firstPair, secondPair;
int main(){
    file.open("input.txt");

    while (std::getline(file, column1, ',')){
        std::getline(file, column2);
        int pairDel1 = column1.find("-");
		int pairDel2 = column2.find("-");

        firstPair.first = std::stoi(column1.substr(0, pairDel1));
        firstPair.second = std::stoi(column1.substr(pairDel1+1, 2));
        secondPair.first = std::stoi(column2.substr(0, pairDel2));
        secondPair.second = std::stoi(column2.substr(pairDel2+1, 2));

        if((firstPair.first <= secondPair.second) && (secondPair.first <= firstPair.second))
            result++;
    }

    std::cout<<"The result is: "<<result<<std::endl;
    file.close();
    return 0;
}