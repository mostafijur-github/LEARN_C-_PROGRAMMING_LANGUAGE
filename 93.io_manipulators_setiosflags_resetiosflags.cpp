/// IO Manipulators setiosflags, resetiosflags
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    cout<<setiosflags(ios::showpos)<<10<<endl;
    cout<<resetiosflags(ios::showpos)<<10<<endl;

    return 0;
}



