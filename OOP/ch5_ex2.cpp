/*
Raising a number n to a power p is the same as multiplying n by itself p times.
Write a function called power() that takes a double value for n and an int value for p,
and returns the reuslt as a double value. Use a default argument of 2 for p.
so that if this argument is omitted, the number n will be squared. Write a main()
function that gets values form the user to test this function.

*/
#include <iostream>

using namespace std;

double power(double n, int p = 2);

int main(){

    double number, answer;

    int pow;

    char yeserno;

    cout << "Enter a number : ";
    cin >> number;

    cout << "Want to enter a power (y/n)";
    cin >> yeserno;

    if(yeserno == 'y'){

        cout << "Enter power : ";
        cin >> pow;

        answer = power(number, pow); // raise number to pow

     }else{
        answer = power(number);
     }


     cout << "Answer is " << answer;

     return 0;

}

//power()
// returns number n raised two numbers to 0

double power(double n, int p){
    double result = 1.0;

    for(int j = 0; j <= p; j++){
        result *= n;
    }

    return result;

}

/*
# Example Output
If the user enter `y`

Enter a number : 5
Want to enter a power (y/n) : y
Enter power : 3
Answer is 625
-----
If the user enter `n`

Enter a number: 5
Want to enter a power (y/n) : n
Answer is 25



*/
