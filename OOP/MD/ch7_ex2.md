Create a class called `employee` that contains a name (an object of class string) an employee nubmer (type long). Include a member  function called `getdata()` to get data from the user for insertion into the object. and another function called `putdata()` to display the data. Assume the name has no embedded blanks.

Write a `main()` program to execrise this call It should create an `array` of type
employese, and then invite the user to input data **for up to 100 employees**. Finally, it should print out
the data for all the employees.
#
---
# Soiution
    #include <iostream>
    #include <string>

    using namespace std;

    class employee{
        private:
            string name;
            long number;

        public:
            void getdata(){
                cout << "\nEnter employee name :";
                cin >> name; //Accept One word from name

                cout << "Enter employee number : ";
                cin >> number;
            }

            void putdata(){
                cout << "\nEmploye name : " << name << endl;
                cout << "Employee Number : " << number << endl;
            }
    };

    int main(){
        employee emparr[100];

        int n = 0;

        char ch;

        do{
            cout << "\nEnter data for employee number " << n + 1;
            emparr[n++].getdata();

            cout << "Enter another (y/n) ? ";
            cin >> ch;

        }while(ch != 'n');

        for(int j = 0; j < n; j++){
            cout << "\nEmployee number " << j + 1;

            emparr[j].putdata();
        }

        cout << endl;

        return 0;

    }
#
---

# Example Output
Enter data for employee number 1
Enter employe name : mgmg
Enter employe number : 5
Enter another (y/n) ? y

Enter data for employee number 2
Enter employe name : thura
Enter employe number : 8
Enter another (y/n) ? y

Enter data for employee number 3
Enter employe name : hla
Enter employe number : 7
Enter another (y/n) ? n

Employee number 1
Employee name : mgmg
Employee number : 5


Employee number 2
Employee name : thura
Employee number : 8

Employee number 3
Employee name : hla
Employee number : 7

