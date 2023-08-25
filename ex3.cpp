/*
	Write a function(addengl()) that takes two Distance values as arguments, 
	adds the two variables of type Distance and returns a value of the same type.
	The program asks the user for two lengths, in feet-and-inches format, adds them together
	by calling the function addengl() and display the result. The two lengths are represented 
	by structure of named Distance.
	
	*/
#include <iostream>

using namespace std;

strcut Distance{
	int feet;
	float inches;
};

Distance addengl(Distance, Distance);


int main(){
	Distance d1, d2, d3;
	Distance d2 = {11, 6.25};
	
	cout << "\nEnter feet : ";
	cin>> d1.feet;
	
	cout << "Enter inches : ";
	cin >> d1.inches;
	
	cout << "\nEnter feet : ";
	cin>> d2.feet;
	
	cout << "Enter inches : ";
	cin >> d2.inches;
	
	d3 = addengl(d1,d2);
	
	cout << d1.feet << "\'-" << d1.inches << "\"" << endl;
	cout << d2.feet << "\'-" << d2.inches << "\"" << endl;
	cout << d3.feet << "\'-" << d3.inches << "\"" ;	
	
		
	return 0;
}

Distance addengl(distance dd1, Distance dd2){
	Distance dd3;
	dd3.inches = dd1.inches + dd2.inches;
	dd3.feet = 0;
	
	if(dd3.inches >= 12.0)
	{
		dd3.inches -= 12.0;
		dd3.feet++;
	}
	dd3.feet += dd1.feet + dd2.feet;
	
	
	return dd3;
}
