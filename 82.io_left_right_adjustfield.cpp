///IO left, right and adjustfield
#include<iostream>
using namespace std;
int main()
{
    cout.width(20);
    cout.fill('.');
    cout.setf(ios::left);
    cout<<"NBIU Rajshahi"<<endl;
    cout.setf(ios::left,ios::adjustfield);
    cout<<"NBIU Rajshahi"<<endl;

    return 0;
}

