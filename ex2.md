/*
	Write a program to generate the following output. Use an appropiate loop. 
	Nested Loop
        *
	   **
	  *****
	********
   **********
*/

#include <iostream>

using namespace std;

int main(){
	
	int i, j, row = 5;
	
	for(i = 1; i <= row; j++){
		for(j=1; j <= row-i; j++)
			cout << " ";
		
		for(j = 1; j <= 2 * i - 1; j++)
			cout << "*";
		cout << endl;
	}
	
	
	return 0;
}
