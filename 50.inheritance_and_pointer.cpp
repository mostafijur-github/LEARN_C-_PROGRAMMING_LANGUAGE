///Inheritance and pointer
#include<iostream>
using namespace std;
class base{
public:
    int a;
};
class derive:public base{
public:
    int b;
};
int main(){
    derive obj;
    derive *ptr;
    ptr = &obj;
    ptr->a = 2;
    ptr->b = 3;
    cout<<ptr->a<<endl;
    cout<<ptr->b<<endl;
    return 0;
}
