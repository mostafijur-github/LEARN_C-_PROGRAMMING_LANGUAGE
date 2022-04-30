///IO width, precision, fill
#include<iostream>
using namespace std;
int main()
{
    cout.width(20);
    cout.fill('.');
    cout<<"NBIU Rajshahi"<<endl;

    cout.precision(4);
    cout<<12.345;
    return 0;
}
/**
    The precision can not work for integer value.
*/
