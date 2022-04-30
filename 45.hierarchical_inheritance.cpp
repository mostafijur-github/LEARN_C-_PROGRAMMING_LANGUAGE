///Hierarchical inheritance
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
class student2:public number{
public:
     void call(){setValue();print();}
};
int main(){
    cout<<"For first Student"<<endl;
    student obj;
    obj.call();
    cout<<"For Another Student"<<endl;
    student2 obj2;
    obj2.call();
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

