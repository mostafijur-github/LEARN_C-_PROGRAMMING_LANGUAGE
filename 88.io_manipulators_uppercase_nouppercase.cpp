/// IO Manipulators uppercase nouppercase
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a;
    a = 2345;
    cout<<scientific<<a<<endl;
    cout<<scientific<<uppercase<<a;

    return 0;
}

