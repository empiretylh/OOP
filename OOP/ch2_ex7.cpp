/*
	You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying by 9/5
	and adding 32. Write a program that allows the user to enter a floating-point number representing degrees Celsius, and
	then displays the corresponding degrees Fahrenheit.

	*/

#include <iostream>

using namespace std;

int main(){

	 float ftemp, celtemp;

	 cout << "Enter celsius temperature : ";
	 cin >> celtemp;

	 ftemp = (celtemp * 1.8 + 32);

	 cout << "Equivalent in Fahrenheit : " << ftemp << " F";

	return 0;
}

/*
# Example Output
Enter celsius temperature : 77
Equivalent in Fahrenheit : 170.6 F


*/


