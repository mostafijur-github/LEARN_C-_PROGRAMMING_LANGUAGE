///IO Boolean Input Output
#include<iostream>
using namespace std;

int main()
{
    bool b;
    cin.setf(ios::boolalpha);
    cout.setf(ios::boolalpha);
    cin>>b;
    cout<<b;
    return 0;
}
