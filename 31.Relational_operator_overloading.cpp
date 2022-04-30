///Relational Operator Overloading
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
    bool operator > (number obj);   /* Relational operator overloading */
    bool operator < (number obj);
    bool operator == (number obj);
};
/**Binary operator overloading*/
number number::operator+(number obj){
    number temp;
    temp.x = x+obj.x;
    temp.y = y+obj.y;
    return temp;
}
/**Relational operator overloading*/
bool number::operator>(number obj){
    return (x+y) > (obj.x+obj.y);
}
bool number::operator<(number obj){
    return (x+y) < (obj.x+obj.y);
}
bool number::operator==(number obj){
    return (x+y) == (obj.x+obj.y);
}

int main(){
    number n1,n2,n3;
    n1.setValue(8,5);
    n2.setValue(4,6);
    n3 = n1+n2;
    n3.print();
    if(n1>n2||n1<n2)
        cout<<"n1"<<endl;
    else if(n1==n2)
        cout<<"n1 = n2"<<endl;
    else
        cout<<"n2"<<endl;
    return 0;
}
