///Inheritance and pointer again
#include<iostream>
using namespace std;
class base{
public:
    void print(){cout<<"Base"<<endl;}
};
class derive:public base{
public:
    void print(){cout<<"Derive"<<endl;}
};
int main(){
    base *p;
    derive obj;
    p = &obj;
    p->print();
    return 0;
}
