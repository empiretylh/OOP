/*
    Write a program that accepts a dividend and a divisor, calculates quotient and
    remainder until the user stops (y/n).
*/

#include <iostream>

using namespace std;

int main(){
    long dividend, divisor;
    char ch;

    do{
    cout << "\nEnter dividend : ";
    cin >> dividend;
    cout << "Enter divisor : ";
    cin >> divisor;

    cout << "Quotient is " << dividend / divisor;
    cout << ", remainder is " << dividend % divisor;
    cout << "\nDo another? (y/n) :";
    cin >> ch;
    }while(ch != 'n');
return 0;
}
