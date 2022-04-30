/// IO Manipulators showbase, noshowbase
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<hex<<showbase<<1234;
    cout<<endl<<oct<<1234;
    cout<<endl<<noshowbase<<oct<<1234;
    return 0;
}
