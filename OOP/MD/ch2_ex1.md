# Assuming there are `7.481 gallons` in a cubic foot, write a program that asks the user to enter a number of `gallons`, and then displays the equivalent in `cubic feet`.

#
----
Related Topic 
[Data Type float](courseid-5,lessonid-11)

---

# Solution

    #include <iostream>

    using namespace std;

    int main(){

        float gallons, cubicfeet; //Declare two variable

        cout << "Enter a number of gallons : ";
        cin >> gallons; 

        cubicfeet = gallons / 7.481;

        cout << "Equivalent in cubic feet : " << cubicfeet;

        return 0;
    }
#
---
# Example Output 
Enter a number of gallons : 5
Equivalent in cubic feet : 0.66836
