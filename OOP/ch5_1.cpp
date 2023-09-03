/*
    Refer to ther CIRCAREA program in Chapter 2 "C++ Programming Basics". Write a function called circarea() that
    finds the area of a circle in a similar way. It should take an argument of type float and return argument
    of the same type. Write a main() functin that gets a radius value from the user, call circarea(), and display
    the result.
*/
#include <iostream>


using namespace std;

float circarea(float radius);

int main(){

    double rad;
    cout << "\nEnter radius of circle : ";
    cin >> rad;

    cout << "Area is " << circarea(rad) << endl;

    return 0;
}


float circarea(float radius){
    const float PI = 3.14;
    return radius * radius * PI;
}

/*
# Example Output
    Enter radius of circle : 5
    Area is 78.5
*/
