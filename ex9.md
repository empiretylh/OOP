#include <iostream>

using namespace std;

struct Distance {
    int feet;
    float inches;
};

struct Room{
    Distance length;
    Distance width;
};


int main(){

    //Area of a room

    Room dinning;  //define a room
    dinning.length.feet = 13; //assign values to room
    dinning.length.inches = 6.5;

    dinning.width.feet = 10;
    dinning.width.inches = 0.0;

    //Convert length & width;

    float l = dinning.length.feet + dinning.length.inches / 12;
    float w =  dinning.width.feet + dinning.width.inches / 12;

    //find area and display it

    cout << "Dining room area is " << l * w <<  " square feet \n";

    return 0;
}
