///Random Topics Conversion Function
#include<iostream>
using namespace std;
class demo{
public:
    int x,y;
    demo(){}
    demo(int a, int b){x=a;y=b;}
    operator int(){return x+y;}
};
int main()
{
    demo obj(2,3);
    int a;
    a = obj;
    cout<<a<<endl;
    return 0;
}
