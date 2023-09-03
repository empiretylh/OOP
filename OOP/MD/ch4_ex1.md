A phone number such as `(212) 767-8900`, can be through of as having three parts: the area code `(212)`, the exchange `(767)`and the number `(89000)`. Write a program that uses a structure to store these parts of a phone number separtely. Call the sturcture phone. Create two structure variables of type phone Initialize one, and have the user input a n umber for the one.The display both numbers. The interchange might look like this

    Enter your area code, exchange, and number : 45 555 1212
    My number is (212) 767-8900
    Your number is (415) 555-1212
#
---
# Solutiom
    #include <iostream>
    using namespace std;

    struct phone{
        int area;
        int exchange;
        int number;
    };


    int main(){
        phone ph1 = {212,767,8900};
        phone ph2;

        cout << "Enter your area code, exchange and number : ";
        cout << "\nDon't use leading zero : ";
        cin >> ph2.area >> ph2.exchange >> ph2.number;

        cout << "\n My number is"
            << '('<< ph1.area << ')'

            << ph1.exchange<< '-' << ph1.number;

        cout << "\n Your number is"
            << '('<< ph2.area << ')'
            << ph2.exchange<< '-' << ph2.number;

        return 0;
    }

#

---

# Example output

Enter your area code, exchange and number
Don't use leading zero : 45 555 1212
My number is (212) 767-8900
Your number is (415) 555-1212

