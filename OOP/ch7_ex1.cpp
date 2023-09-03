/*Write a function called `reversit()` that reverse a C-string (array of char). **Use a for loop that swap the first and last characters, then the second and next to last characters, and so on.** The string should be passed to `reversit()` as an argument.

The program should get a string from the user, call `reversit()` and print out the result. **Use an input method that allow embedded blanks.**
#
---
Related Topic
[forloop](courseid-5,lessonid-16), [if statement](courseid-5,lessonid-15), [function](courseid-5,lessonid-20)

---
# Solution
*/
    #include <iostream>
    #include <cstring>

    using namespace std;

    void reversit(char S[]);

    int main(){
         const int max = 80;

         char str[max];
         cout << "Enter a string :";
         cin.get(str,max,'$'); //'$' sign for embedded blank

         reversit(str);

         cout <<"Reversit String : " << str;

        return 0;
    }

    void reversit(char S[]){
        int len = strlen(S);
        for (int j = 0 ; j < len / 2; j++){
            char temp = S[j];
            S[j] =  S[len - j - 1];
            S[len - j - 1] = temp;

        }
    }


/*
Example Output:
Enter a string : abcdefg
Reversit String : gfedcba

*/
