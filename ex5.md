# Write a program that allow the user to type up to six digits, and then display the resulting number as type long integer. The digits shoudl be read individually,	as characters, using `getche()`. constructing the number involves multiplying existing value by 10 and than adding the new digit. (Hint : Subtract `48` or `'0'` to go from `ASCII` to a `numerical digit.`)
#
---
Related Topic

[Data type](courseid-5,lessonid-11), [while loop](courseid-5,lessonid-16), [Operator](courseid-5,lessonid-13), [Escapse characters](courseid-5,lessonid-18)

---
# Solution

	#include <iostream>
	#include <conio.h>

	using namespace std;

	int main(){
		char ch;
		unsigned long total = 0;
		cout << "\n Enter a number: ";
		while((ch = getche()) != '\r')
			total =  total * 10 + ch - '0';
		
		cout << "\n Number is : " << total << endl;
		return 0;
	}
