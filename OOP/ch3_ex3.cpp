/*
    Write a program that allow the user to type up to six digits and then display the resulting number as type long integer.
    The digit should be read invidualy as characters, using getche(), Constructing the number involve multiplying the existing value by 10 and then
    adding a new digit (Hint: Subtract  48 or '0' to go from ASCII to a numberical digit)

*/


#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    char ch;

    unsigned long total = 0;

    cout << "\n Enter number : ";


    while((ch=getche())!= '\r'){
        total = total * 10 + ch - '0';
        cout << "\n Number is : " << total << endl;
    }

    return 0;
}
