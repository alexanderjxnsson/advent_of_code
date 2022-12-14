#include <iostream>
#include <fstream>
#include <vector>
#include <string>
std::ifstream fin;
std::ofstream fout;
std::string fileName = "input.txt";


void checkFile(){
    fin.open(fileName, std::iostream::in);
    if (!fin.is_open())
    {
        std::cout<<"File is fucked\n";
    }
}
void getInputToVector(){
    while ()
    {
        /* code */
    }
    
}

int main() {
    checkFile();
}
