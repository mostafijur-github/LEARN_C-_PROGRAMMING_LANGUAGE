///OutputStream Operator(<<) Overloading
#include<iostream>
using namespace std;
class number{
    int x,y;
public:
    number(){x=0; y=0;}
    number(int a, int b){x=a; y=b;}
    void set_Value(int a, int b){x=a; y=b;}
    void print(){cout<<x<<" "<<y<<endl;}
    friend void operator << (ostream &osb, number obj){
        osb<<obj.x<<" "<<obj.y<<endl;
    }
};
int main(){
    number n1,n2,n3;
    n1.set_Value(1,2);
    n2.set_Value(3,4);
    cout<<n1;
    cout<<n2;
    return 0;
}
