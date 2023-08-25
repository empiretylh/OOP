#include <iostream>
using namespace std;

int main()
{
    void intfrac(float, float&, float&);

    float number,intpart,fracpart;

    do
    {
        cout<<"enter real number :";
        cin>>number;

        intfrac(number,intpart,fracpart);

        cout <<"integer part : "<<intpart<<" fraction part :" <<fracpart<<endl;
    }
    while(number != 0.0);
    return 0;
}
void intfrac(float n,float&intp,float&fracp)
{

    long temp = static_cast<long>(n);
    cout<< temp <<endl;
    intp = static_cast<float>(temp);
    cout << intp <<endl;
    fracp = n - intp;
    cout<< fracp<<endl;
}


