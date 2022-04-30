///Constructor Overloading
#include<iostream>
using namespace std;

class add{
public:
    add(int a,int b){cout<<a+b<<endl;}
    add(int a,int b,int c){cout<<a+b+c<<endl;}
};
int main()
{
    add obj(2,3);
    add obj2(2,3,5);
    return 0;
}

