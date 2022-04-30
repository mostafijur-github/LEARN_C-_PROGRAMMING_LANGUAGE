///Inheritance and same member
#include<iostream>
using namespace std;
class base{
public:
    int a;
    int get(){return a;}
};
class derive:public base{
public:
    int a;
    int get(){return a+base::get();}
};
int main(){
    derive obj;
    obj.base::a = 1;
    obj.a = 5;
    cout<<obj.derive::get()<<endl;
    return 0;
}
