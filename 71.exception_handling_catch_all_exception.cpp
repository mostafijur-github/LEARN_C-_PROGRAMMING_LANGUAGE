///Exception handling catch all exceptions
#include<iostream>
using namespace std;

int main()
{
    try{
        int a;
        cin>>a;
        if(a==1) throw 1;
        if(a==2) throw 1.5;
        if(a==3) throw "NBIU";
        if(a==4) throw "Rajshahi";
    }catch(int a){
        cout<<"Int Exception"<<endl;
    }catch(...){
        cout<<"Exception"<<endl;
    }
    return 0;
}
