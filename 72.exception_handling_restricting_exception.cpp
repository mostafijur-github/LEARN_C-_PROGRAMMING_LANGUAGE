///Exception handling restricting exceptions
#include<iostream>
using namespace std;
void demo(int a) throw(int){
    if(a==1) throw 1;
    if(a==2) throw 1.5;
    if(a==3) throw "NBIU";
}
int main(){
    try{
        int n;
        cin>>n;
        demo(n);
    }catch(...){
        cout<<"Exception"<<endl;
    }
    return 0;
}
