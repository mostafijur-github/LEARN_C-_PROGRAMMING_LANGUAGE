///Random Topics Explicit Constructor
#include<iostream>
using namespace std;
class demo{
public:
    int x;
    demo(int a){x=a;}
};
class demo2{
public:
    int x;
    explicit demo2(int a){x=a;}
};
int main()
{
    demo obj=5;
    cout<<obj.x<<endl;
    demo2 obj2(6);
    cout<<obj2.x<<endl;
    return 0;
}


