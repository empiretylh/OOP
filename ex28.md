//Write a program that write some text to a file.
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream myfile;
    myfile.open("example.txt");
    myfile<<"Write this to a file.\n";
    myfile.close();

return 0;
}

