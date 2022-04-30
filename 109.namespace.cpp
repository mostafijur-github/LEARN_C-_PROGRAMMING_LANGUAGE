///Name space code
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

int main(){
    cus::a = 5;
    cout<<cus::a<<endl;
    cus::demo obj;
    obj.x = 6;
    cout<<obj.x<<endl;
    return 0;
}
