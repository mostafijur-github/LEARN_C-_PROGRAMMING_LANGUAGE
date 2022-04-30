///Random Topics Mutable
#include<iostream>
using namespace std;
class demo{
public:
    mutable int x;
    demo(){x=5;}
    void change(int a) const {x=a;}
};
int main()
{
    demo obj;
    cout<<obj.x<<endl;
    obj.change(6);
    cout<<obj.x<<endl;
    return 0;
}

