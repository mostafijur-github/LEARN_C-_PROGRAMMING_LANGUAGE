///Exception Handling multiple exception
#include<iostream>
using namespace std;

int main(){
    try{
        cout<<"Try"<<endl;
        throw 1.8;
    }catch(int a){
        cout<<"Exception(int) "<<a<<endl;
    }catch(double a){
        cout<<"Exception(double) "<<a<<endl;
    }
    return 0;
}
