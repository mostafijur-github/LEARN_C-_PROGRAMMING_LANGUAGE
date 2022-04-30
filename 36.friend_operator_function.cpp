///Friend Operator Function
#include<iostream>
using namespace std;

class number{
    int x,y;
public:
    number(){x=0; y=0;}
    number(int a, int b){x=a; y=b;}
    void set_Value(int a, int b){x=a; y=b;}
    void print(){cout<<x<<" "<<y<<endl;}
    friend number operator + (number a, number b){
        number temp;
        temp.x = a.x+b.x;
        temp.y = a.y+b.y;
        return temp;
    }
};
int main(){
    number n1,n2,n3;
    n1.set_Value(1,2);
    n2.set_Value(3,4);
    n3 = n1 + n2;
    n3.print();
    return 0;
}
/**
    Friend operator function can not overload the =, (),[],-> operator
    because they use this pointer(*this).
*/
