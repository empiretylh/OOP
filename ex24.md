#include <iostream>
using namespace std;
int main(){
    const int days=7;
    const int max=10;

    char star[days][max]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Sunday"};

    for(int j=0;j<days;j++)
        cout<<star[j]<<endl;
return 0;
}
