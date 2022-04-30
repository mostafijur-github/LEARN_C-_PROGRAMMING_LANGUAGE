///Template class build in data type
#include<iostream>
using namespace std;
template <class temp,int s>
class demo{
    temp a[s];
public:
    void print(){cout<<sizeof(a)<<endl;}
};
int main(){
    demo<int,5> obj;
    obj.print();
    return 0;
}

