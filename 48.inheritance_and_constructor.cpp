///Inheritance and constructor
#include<iostream>
using namespace std;
class base{
public:
    int a;
    base(int x){a=x;}
};
class derive:public base{
public:
    int b;
    derive(int y):base(4){b=y;}
};
///another example
class base1{
public:
    int a;
    base1(int x){a=x;}
};
class base2{
public:
    int b;
    base2(int y){b=y;}
};
class derive2:public base1,public base2{
public:
    int c;
    derive2(int x,int y,int z):base1(0),base2(0){
        a = x;
        b = y;
        c = z;
        }
};
int main(){
    derive obj(5);
    cout<<obj.a<<endl;
    cout<<obj.b<<endl;
    derive2 obj2(2,3,4);
    cout<<obj2.a<<endl;
    cout<<obj2.b<<endl;
    cout<<obj2.c<<endl;
    return 0;

}


