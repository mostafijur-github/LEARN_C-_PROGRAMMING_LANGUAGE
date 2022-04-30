///Copy constructor
#include<iostream>
using namespace std;
class demo{
    int *p;
public:
    demo(){ p = new int(0); cout<<"Cons.."<<*p<<endl;}
    ~demo(){ cout<<"Dis.."<<*p<<endl; delete p;}
    void setValue(int x){ *p = x;}
    void print(){cout<<*p<<endl;}
};
class demo2{
    int *p;
public:
    demo2(){ p = new int(0); cout<<"Cons.."<<*p<<endl;}
    ~demo2(){ cout<<"Dis.."<<*p<<endl; delete p;}
    void setValue(int x){ *p = x;}
    void print(){cout<<*p<<endl;}
    /*It's for copy constructor*/
    demo2(demo2 &obj){
        p = new int(1);
        cout<<"Cons.."<<*p<<endl;
        }
};
void test()
{
    ///This for first object
    demo obj;
    cout<<"Before setValue..";
    obj.print();
    obj.setValue(2);
    cout<<"After setValue..";
    obj.print();
    ///This for second object
    demo obj2 = obj;
    cout<<"Before setValue..";
    obj2.print();
    obj2.setValue(4);
    cout<<"After setValue..";
    obj2.print();
}
int main()
{
    test();
    cout<<"\nHere we create two object but only constructor are called."<<endl;
    cout<<"So solve this problem we use copy constructor."<<endl;
     ///This for first object
    demo2 obj3;
    cout<<"Before setValue..";
    obj3.print();
    obj3.setValue(2);
    cout<<"After setValue..";
    obj3.print();
    ///This for second object
    demo2 obj4 = obj3;
    cout<<"Before setValue..";
    obj4.print();
    obj4.setValue(4);
    cout<<"After setValue..";
    obj4.print();
    return 0;
}
/***
    When we declare an object and assign it at the same time then the constructor will not call.
    When we use an object as a function parameter or return type then the constructor will not call.

*/
