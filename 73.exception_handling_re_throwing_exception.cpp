///Exception handling re throwing exception
#include<iostream>
using namespace std;

void demo()
{
    try{
        throw 1;
    }catch(int e){
        cout<<"In sub function exception = "<<e<<endl;
        throw;
    }
}
int main()
{
    try{
        demo();
    }catch(int a){
        cout<<"In main function exception = "<<a<<endl;
    }

    return 0;
}
