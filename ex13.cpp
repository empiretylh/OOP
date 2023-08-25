/* Write a program that reverse the given string.*/

#include <iostream>
#include <cstring>

using namespace std;

void reversit(char S[]);
int main(){
     const int max = 80;

     char str[max];
     cout << "Enter a string :";
     cin.get(str,max);

     reversit(str);

     cout <<"Reversit String : " << str;

    return 0;
}

void reversit(char S[]){
    int len = strlen(S);
    for (int j = 0 ; j < len / 2; j++){
        char temp = S[j];
        S[j] =  S[len - j - 1];
        S[len - j - 1] = temp;

    }
}
