# Write a program that calculate factorial value of a given number.
#
---
Related Topic
[forloop](courseid-5,lessonid-16), [Operator](courseid-5,lessonid-13), [Data type](courseid-5,lessonid-11)

---
# Solution

	#include <iostream>

	int main(){
		
		unsigned int numb;
		unsigned long fact = 1;
		
		cout << "Enter a number : ";
		cin >> numb;
		
		
		cout << "Enter a number : ";
		cin>> numb;
		
		for(int j =  numb; j > 0; j--)
			fact *= j;
			
		cout << "Factorial is " << fact << endl;
		return 0;
	}