///Assignment Operator Overloading
#include<iostream>
using namespace std;
class number{
    int x,y;
public:
    number(){ x=0; y=0;}
    void setValue(int a,int b){x=a; y=b;}
    void print(){cout<<x<<" "<<y<<endl;}
    number operator = (number obj);   /* Assignment operator overloading */
};
/**Assignment operator overloading*/
number number::operator = (number obj){
    x = obj.x;
    y = obj.y;
}
/**Another Assignment operator overloading*/
class number2{
    int x,y;
public:
    number2(){ x=0; y=0;}
    void setValue(int a,int b){x=a; y=b;}
    void print(){cout<<x<<" "<<y<<endl;}
    number2 operator = (number2 obj);   /* Assignment operator overloading */
};
number2 number2::operator = (number2 obj){
    x = obj.x;
    y = obj.y;
    return *this;
}
int main(){
    number n1,n2,n3;
    n1.setValue(2,2);
    n2.setValue(4,4);
    n1.print();
    n2.print();
    n1 = n2;
    n1.print();
    n2.print();
    n3 = n1 = n2; /**Then print wrong value.It can be solved by using this_pointer(*this)*/
    n3.print();  /**This purpose we use this_pointer(*this) as the return type on the overloaded function.*/
    number2 obj1,obj2,obj3;
    obj1.setValue(2,2);
    obj2.setValue(4,4);
    obj1.print();
    obj2.print();
    obj1 = obj2;
    obj1.print();
    obj2.print();
    obj3 = obj1 = obj2;
    obj3.print();
    return 0;
}


