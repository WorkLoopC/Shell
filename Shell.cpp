//use cd to change directory (will start using on other commands like ll soon,THIS CODE IS NOT FINISHED YET)
#include <iomanip>
#include <iostream>
#include <Windows.h>

void changeDirectory() {
std::string newPath;
std::string path;
if (SetCurrentDirectory(path.c_str()) == 0) {
    std::string userInput;
    std::getline(std::cin, userInput);
if (userInput.substr(0, 2) == "cd") {
    newPath = userInput.substr(3); 
    changeDirectory();}
else {
    std::cerr << "Invalid command. Use 'cd' to change the directory." <<"\n";}
    }
}

void shellView() {
system("cls");
const int x = 59;
const int y = 10;
for (int i=0;i<x;i++) {
std::cout << "-";}
std::cout << "\n";
std::cout << '|' << ".>" << std::setw(56) << '|';
//getline(std::cin, userInput);
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
shellView();
while(1){
//changeDirectory();
}
return 0;
}
