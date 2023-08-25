Write a program that allows the user to enter the `number` and generate the
multiples of number about `20` times.

		#include <iostream>

			using namespace std;

			int main(){
				int n;
				
				cout << "Enter a number : ";
				cin >> n;
				
				for(int i = 1; i <= 20; i++){
					cout << n * i << "\t";
				}
				return 0;
			}

/*

*/
