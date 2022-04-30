/// IO Manipulators defaults,fixed,scientific
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b;
    a = 2345.0;
    b = 234.35;
    cout<<"default"<<endl;
    cout<<a<<" "<<b<<endl;
    cout<<"fixed"<<endl;
    cout<<fixed<<a<<" "<<b<<endl;
    cout<<"scientific"<<endl;
    cout<<scientific<<a<<" "<<b<<endl;

    return 0;
}


