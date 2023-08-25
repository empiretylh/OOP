/* Write a program that create a fine named "fileExample". The user have to input some lines of string
from the keyboard and save to the fileExample.txt.*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ofstream myfile;
    string line;
    myfile.open("example.txt");
    cout << "Enter some line of text";

    getline(cin,line);
    myfile << line;
    myfile.close();


return 0;}
