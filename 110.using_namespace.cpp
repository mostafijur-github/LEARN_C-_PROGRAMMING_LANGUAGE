///using namespace
#include<iostream>
using namespace std;
namespace cus{
    int a;

    class demo{
    public:
        int x;
    };

    int func();
}
int cus::func(){
    return 2;
}
using namespace cus;
int main(){
    using namespace cus;
    a = 5;
    cout<<a<<endl;
    demo obj;
    obj.x = 6;
    cout<<obj.x<<endl;
    return 0;
}
