/// IO Manipulators showpos,nshowpos
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a;
    a = 2345;
    cout<<showpos<<a<<endl;
    cout<<noshowpos<<a;

    return 0;
}


