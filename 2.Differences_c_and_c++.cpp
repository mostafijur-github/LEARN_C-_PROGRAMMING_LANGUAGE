#include<iostream>
using namespace std;
struct abc{
    int a;
};
int main()
{
    abc obj;
    obj.a=10;
    int a;
    a = 3;
    int b;
    b = 4;
    cout<<a+b<<endl;
    int i(5);
    cout<<i<<endl;
    bool bl=5;
    cout<<bl<<endl;
    cout<<obj.a<<endl;
    return 0;
}
/**
    In C++ program we can declare a variable in any place.
    In C program we can not declare a variable in any place.
    Here we use an extra data type boolean as bool key word.
*/
