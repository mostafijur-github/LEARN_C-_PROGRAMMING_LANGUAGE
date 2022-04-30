///IOS Member setf Advanced
#include<iostream>
using namespace std;
int main()
{
    cout.setf(ios::showpos | ios::showpoint);
    cout<<4.345<<endl;

    cout.setf(ios::hex,ios::basefield);
    cout<<100<<endl;
    cout.setf(ios::hex | ios::showbase,ios::basefield | ios::showbase);
    cout<<100<<endl;
    return 0;
}
