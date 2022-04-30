///using namespace advanced
#include<iostream>
using namespace std;
namespace cus{
    int a,b;

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
    cus::a = 5;
    cus::b = 6;
    cout<<cus::a * cus::b<<endl;
    using namespace cus;
    a = 7;
    cout<<a*b<<endl;
    demo obj;
    obj.x = 6;
    cout<<obj.x<<endl;
    return 0;
}
