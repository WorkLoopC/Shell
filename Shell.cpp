//This code cannot be finished because from what i have learned you cant run rest of the code without having to put user input first
//This means that the "shell" is not going to be displayed untill input is given 
#include <iomanip>
#include <iostream>
#include <Windows.h>
#include <string>
//#include <filesystem>

std::string getUserInput() {
std::string userInput;
std::getline(std::cin, userInput);
return userInput;
}

void shellView() {
system("cls");
const int x = 59;
const int y = 10;
for (int i=0;i<x;i++) {
std::cout << "-";}
std::cout << "\n";
std::cout << '|' << ".>"<<getUserInput() << std::setw(30) << '|'<<'\n'<<std::flush;
std::cout << "\n";
for (int i=0;i<y;i++) {
    for (int j=0;j<x;j++) {
        if (j==0 || j==58) {
            std::cout << "|";}
         else {
            std::cout << " ";}
}
std::cout << "\n";
}
for (int i=0;i<x;i++) {
    std::cout << "-";
    }
}

int main() {
while(1){
shellView();
}
return 0;}
