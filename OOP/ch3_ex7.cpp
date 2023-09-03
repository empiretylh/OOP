/*
    Write a program thta calculate how much money you will end up if  you invest and amout at fixed intrest rate, compunded yearly, have the user furnish the initial amount, the number of years, and the yearly interest rate in percent.
*/

/*
Enter initial amount : 3000
Enter number of years : 10
Enter interest rate (percent per year) : 5.5
At the end of 10 years, you will have  5124.43 dollars.

*/
#include <iostream>

using namespace std;

int main () {
    int year;

    double initial_amount, interest_rate;

    cout << "Enter the initial amount : ";
    cin >> initial_amount;

    cout << "Enter the number of years: ";
    cin >> year;

    cout << "Enter yearly interest rate in percent : ";
    cin >> interest_rate;


    for(int i = 0; i < year; i++){
        initial_amount = initial_amount + (initial_amount * (interest_rate / 100));

    }

    cout <<"At the end of 10 years, you will have  " << initial_amount << " dollars."

    return 0;
}
