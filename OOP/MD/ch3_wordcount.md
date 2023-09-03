# Write a program that count words and letters from ther user input.


# Solution 

    #include <iostream>
    #include <conio.h>

    using namespace std;

    int main(){
        int chcount = 0;
        int wdcount = 0

        char ch = 'a';

        cout << "Enter a phrase " << endl;
        ch = getche();

        while(ch != '\r'){
            if(ch == ' ')
                wdcount++;

            else
                chcount++;

            ch = getche();
        }

        cout << endl;

        cout << "Words = " << wdcount << endl;
        cout << "Letters = " << (chcount - 1) << endl;

        return 0;
    }

# 

