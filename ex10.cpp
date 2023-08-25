/*
    Initializing Nested Structures With Class
*/

#include <iostream>
#include <string>

using namespace std;

class employee{
    public :
        void getdata(){
            cout << "Enter employee name : ";
            cin >> name;
            cout << "Enter employee number : ";
            cin >> number;
        }
        void putdata(){
            cout << "Employee name : " << name << endl;
            cout << "Employee number : " << number;
        }

    private:
        string name;
        long number;
};

int main(){
    employee first;
    first.getdata();
    first.putdata();

    return 0;
}
