///Function Overloading
#include<iostream>
using namespace std;

void add(int a,int b)
{
   cout<<a+b<<"\n(Here call the int add function)"<<endl;
}
void add(double a,double b)
{
    cout<<a+b<<"\n(Here call the double add function)"<<endl;
}

int main()
{
    int a,b;
    cin>>a>>b;
    add(a,b);

    return 0;
}
