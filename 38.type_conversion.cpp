///Type Conversion
#include<iostream>
using namespace std;

class number{
    int x,y;
public:
    number(){x=0; y=0;}
    number(int a){x=a; y=0;}
    number(int a,int b){x=a; y=b;}
    void setValue(int a,int b){x=a; y=b;}
    void print(){cout<<x<<" "<<y<<endl;}
    operator int(){
        return x+y;
    }
};
class number2{
    int x;
public:
    number2(){x=0; }
    number2(int a){x=a;}
    void setValue(int a){x=a;}
    void print(){cout<<x<<endl;}
    operator number (){
        number temp(x);
        return temp;
    }
};
int main(){
    number n1(2);
    number2 x1(1);
    n1.setValue(2,3);
    /*Build to class*/
    int a = 4;
    n1 = a;
    n1.print();
    /*class to build*/
    n1.setValue(4,5);
    int b;
    b = n1;
    cout<<b<<endl;
    /*class to class*/
    n1 = x1;
    n1.print();
    return 0;
}
/**
    There are three types of type conversion..
    1.Build to class
    1.Class to build
    1.class to class
*/
