/*
	On a certain day, The British pound was equivalent to $1.487US., the French
	franc was $0.172, The Germand deutschemark was $0.584 and the Japanese yen was
	$0.00955. Write a program that allow the user to enter an amount in dollars, and
	then displays this value converted to these four other monetary units.
	
	*/
#include <iostream>

using namespace std;

int main(){
	float dollars;
	cout << "Enter amount in dollars: ";
	cin >> dollars;

	float pound =  dollars / 1.487;
	float franc = dollars / 0.172;
	float deutschemark  = dollars / 0.584;
	float yen = dollars / 0.00955;

	cout << "$ " << dollars << "Equivalent to \n Pound : " << pound << endl
	<< "Franc : " << franc << endl << 
	"Deutschemark" << deuts << endl << "Yen : " << yen << endl;
	
		
	return 0;
}

