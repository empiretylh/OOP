# Create a `structure` called Room that use two variable of type Distance to model the area of a room. Initialize a variable of type Room to specific dimensions. To calculate the area, convert each dimension type `float` representing `feet` and `inches` and then multiply the resulting three numbers.
#
---
# Solution

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
