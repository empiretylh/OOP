#include <iostream>
using namespace std;
int main(){
    const int max=80;
    char str[max];

    cout<<"enter a string :";
    cin.get(str,max,'$');
    cout<<"you entered:\n"<<str<<endl;
return 0;
}
