///Binary Operator Overloading
#include<iostream>
using namespace std;
class number{
    int x,y;
public:
    number(){ x=0; y=0;}
    number(int a,int b){ x=a; y=b;}
    void setValue(int a,int b){x=a; y=b;}
    void print(){cout<<x<<" "<<y<<endl;}
    number operator + (number obj); /* Binary operator overloading */
};
/**Binary operator overloading*/
number number::operator+(number obj){
    number temp;
    temp.x = x+obj.x;
    temp.y = y+obj.y;
    return temp;
}
int main(){
    number n1(8,5),n2,n3;
    //n1.setValue(8,5);
    n2.setValue(4,6);
    n3 = n1+n2;
    n3.print();
    return 0;
}
