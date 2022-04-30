///Template class
#include<iostream>
using namespace std;
template <class temp>
class demo{
    temp a;
public:
    demo(){}
    demo(temp x){a = x;}
    void setValue(temp x);
    temp getValue(){return a;}
    void print(){cout<<a<<endl;}
};
template <class temp>
void demo<temp>::setValue(temp x){
    a = x;
}
int main(){
    demo<int> obj(5);
    obj.print();
    demo<double> obj2;
    obj2.setValue(2.5);
    obj2.print();
    return 0;
}
