///Static variable, member,member function
#include<iostream>
using namespace std;
class demo{
public:
    static int a;
    int b;
    static int a2,b2;
    void func(){ cout<<++a<<" "<<++b<<endl;}
    void func2(){ cout<<++a2<<" "<<++b2<<endl;}
    demo(){ b = 0;}
};
int demo::a;
int demo::a2;
int demo::b2;
int main()
{
    demo obj;
    obj.func();
    obj.func();
    demo obj2;
    obj2.func();
    cout<<"using static function"<<endl;
    demo obj3;
    obj3.func2();
    obj3.func2();
    demo obj4;
    obj4.func2();
    return 0;
}
/***
    In static member function only used the static variable
*/
