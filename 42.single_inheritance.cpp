///Single inheritance
#include<iostream>
using namespace std;
class number{
    int id,mark;
protected:
    void setValue();
    void print();
};
class student:public number{
public:
     void call(){setValue();print();}
};
int main(){
    student obj;
    obj.call();
    return 0;
}
void number::setValue(){
    cout<<"Enter id:";
    cin>>id;
    cout<<"Enter mark:";
    cin>>mark;
}
void number::print(){
    cout<<"Id = "<<id<<endl;
    cout<<"Mark = "<<mark<<endl;
}
