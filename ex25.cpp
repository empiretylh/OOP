//Write a program that copy a string to another string.
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str1[]="Happy New Year";

    const int max=80;
    char str2[max];

    strcpy (str2,str1);

    cout<<str2<<endl;

return 0;
}

