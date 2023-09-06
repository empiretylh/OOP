# Write a program that count words and letters from ther user input.
#

---
 
# Solution 

    #include <iostream>
    #include <conio.h>

    using namespace std;

    int main(){
        int chcount = 0;
        int wdcount = 0;

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

        cout << "Words = " << wdcount + 1 << endl;
        cout << "Letters = " << (chcount) << endl;

        return 0;
    }

# 
---

# Example Output
Enter a phrase
one apple
Words = 2
Letters = 8

