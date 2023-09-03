/*
    Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user
    to enter a number of gallons, and then displays the equivalent in cubic feet.
*/

/*
    Enter a number of gallons : 5
    Equivalent in cubic feet : 0.66836
*/

#include <iostream>

using namespace std;

int main(){

    float gallons, cubicfeet; //Declare two variable

    cout << "Enter a number of gallons : ";
    cin >> gallons;

    cubicfeet = gallons / 7.481;

    cout << "Equivalent in cubic feet : " << cubicfeet;


    return 0;
}
