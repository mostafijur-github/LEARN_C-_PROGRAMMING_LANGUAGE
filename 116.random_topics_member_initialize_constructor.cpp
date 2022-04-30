///Random Topics Member Initialize Constructor
#include<iostream>
using namespace std;
class demo{
public:
    int x,y;
    //demo(int a,int b){x=a; y=b;}
    demo(int a,int b) : x(a), y(b) {}
};
int main()
{
    demo obj(3,4);
    cout<<obj.x+obj.y<<endl;
    return 0;
}



