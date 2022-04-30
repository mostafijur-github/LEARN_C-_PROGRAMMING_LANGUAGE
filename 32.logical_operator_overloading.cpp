///Logical Operator Overloading
#include<iostream>
using namespace std;
class number{
    int x,y;
public:
    number(){ x=0; y=0;}
    number(int a,int b){ x=a; y=b;}
    void getValue(int &a, int &b){a=x; b=y;}
    void setValue(int a,int b){x=a; y=b;}
    void print(){cout<<x<<" "<<y<<endl;}
    bool operator && (number obj);   /* Logical operator overloading */
};
/**Logical operator overloading*/
bool number::operator && (number obj){
    return (x&&y) && (obj.x&&obj.y);
}

int main(){
    number n1(5,8),n2(5,6),n3;
    if(n1&&n2)
        cout<<"OK"<<endl;
    else
        cout<<"Not OK"<<endl;
    return 0;
}

