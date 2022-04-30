///Multilevel inheritance
#include<iostream>
using namespace std;
class number{
    int id,mark;
protected:
    void setValue();
    void print();
};
class info:public number{
    string str;
protected:
    void setStr();
    void printStr();
};
class student:public info{
public:
     void call(){
         setValue(); setStr();
         print(); printStr();
         }
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
void info::setStr(){
    cout<<"Department:";
    cin>>str;
}
void info::printStr(){
    cout<<"Department = "<<str<<endl;
}

