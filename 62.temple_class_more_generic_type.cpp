///Template class more generic type
#include<iostream>
using namespace std;
template <class temp, class temp2>
class demo{
    temp a;
    temp2 b;
public:
    demo(){}
    demo(temp x,temp2 y){a = x; b = y;}
    void setValue(temp x, temp2 y);
    void print(){cout<<a<<" "<<b<<endl;}
};
template <class temp,class temp2>
void demo<temp,temp2>::setValue(temp x,temp2 y){
    a = x;
    b = y;
}
int main(){
    demo<int,string> obj(1,"Name");
    obj.print();
    demo<int,string> obj2;
    obj2.setValue(2,"Address");
    obj2.print();
    return 0;
}

