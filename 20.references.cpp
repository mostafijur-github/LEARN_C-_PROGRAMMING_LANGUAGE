///References
#include<iostream>
using namespace std;
int func(int &a){return a;}
int main()
{
    int a;
    a = 5;
    int& r = a; //or int &r = a; not assign &r = 5;
    cout<<r<<endl;
    int b =6;
    cout<<func(b)<<endl;
    return 0;
}
/***
    We can not assign a constant as a reference value.If we already refer a address then we assign a constant value.
    so we can assign a variable as a reference value.
*/
