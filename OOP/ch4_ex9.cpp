/*
Create a structre called time. Its three members, all type int, should be called hours, minutes and seconds. Write a program
that prompts the user to enter a time value in hours, minute and seconds. Write a program that prompts the user to enter a time
value in hours, minutes, and seconds. This can be in 12:59:59 format, or each number can be entered at a separate prompt
("Enter hours:", and so forth). The program should then store the time in a variable of type struct time, and finally print out
total number of seconds represented by this time value:

long totalsecs = t1.hours * 36000 + t1.minutes*60 + t1.seconds

*/
#include <iostream>

using namespace std;


struct timer{
    int hours;
    int minutes;
    int seconds;

};

int main()
{
    timer time;

    cout << "Enter hours : ";
    cin >> time.hours;

    cout << "Enter minutes : ";
    cin >> time.minutes;

    cout << "Enter seconds : ";
    cin >> time.seconds;

    cout << "Total seconds: " << 3600 * time.hours + 60 * time.minutes + time.seconds << endl;

  return 0;
}
/*
# Example output
Enter hours: 12
Enter minutes : 59
Enter seconds : 59
Total seconds : 46799
*/

