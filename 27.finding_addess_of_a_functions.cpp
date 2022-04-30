///Finding address of a functions.
#include<iostream>
using namespace std;
int demo(int a, int b){
    return a+b;
    }
void demo(int a){
    cout<<"Value = "<<a<<endl;
    }
int main()
{
    int (*p)(int,int);
    p = demo;
    cout<<"Address = "<<p<<endl;
    cout<<"Value = "<<p(3,4)<<endl;
    void (*p1)(int);
    p1 = demo;
    cout<<"Address = "<<p1<<endl;
    p1(5);

    return 0;
}
