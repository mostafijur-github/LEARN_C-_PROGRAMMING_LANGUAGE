///Template class default argument
#include<iostream>
using namespace std;
template <class temp=int,int s=50>
class demo{
    temp a[s];
public:
    void print(){cout<<sizeof(a)<<endl;}
};
int main(){
    demo<int,5> obj;
    obj.print();
    demo<> obj2;
    obj2.print();
    return 0;
}

