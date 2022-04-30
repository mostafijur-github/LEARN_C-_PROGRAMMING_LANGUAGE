///IOS Member Flags Sets Type 2
#include<iostream>
using namespace std;
int main()
{
    ios::fmtflags obj;
    obj = ios::showpos | ios::showpoint;
    cout.flags(obj);
    cout<<64<<endl;
    return 0;
}
