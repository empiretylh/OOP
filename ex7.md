# Write a program that prints numbers raised to fourth power.
#
---
Related Topic

[while loop](courseid-5,lessonid-16), [Data type](courseid-5,lessonid-11), [Operator](courseid-5,lessonid-13)

---
# Solution

    #include <iostream>
    #include <iomanip>

    using namespace std;

    int main(){
        int pow = 1, numb = 1;

        while(pow < 100){
            cout << setw(2) << numb;
            cout << setw(5) << pow << endl;
            ++numb;

            pow = numb * numb * numb* numb;

        }
        cout << endl;

        return 0;
    }
