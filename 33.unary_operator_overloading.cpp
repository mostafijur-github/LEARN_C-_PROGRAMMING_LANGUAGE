///Unary Operator Overloading
#include<iostream>
using namespace std;
class number{
    int x,y;
public:
    number(){ x=0;}
    void getValue(int a){ x=a;}
    void print(){cout<<x<<endl;}
    number operator ++ ();         /* Unary operator overloading */
    number operator ++ (int);
};
/**Unary(postfix) operator overloading*/
number number::operator ++ (int a){
    number temp;
    temp.x = x;
    temp.y = y;
    x++; y++;
    return temp;
}
/**Unary(prefix) operator overloading*/
number number::operator ++ (){
    x++; y++;
    number temp;
    temp.x = x;
    temp.y = y;
    return temp;
}

int main(){
    number n1,n2,n3;
    int a;
    cout<<"Enter value for first object(n1):";
    cin>>a;
    n1.getValue(a);
    cout<<"Enter value for second object(n2):";
    cin>>a;
    n2.getValue(a);
    cout<<"Before increment n1 = ";
    n1.print();
    ++n1;
    cout<<"After increment ++n1 = ";
    n1.print();
    cout<<"Before increment n2 = ";
    n2.print();
    ++n2;
    cout<<"After increment ++n2 = ";
    n2.print();
    return 0;
}


