///Exception Handling intro
#include<iostream>
using namespace std;

int main(){
    try{
        cout<<"Try"<<endl;
        throw 1;
    }catch(int a){
        cout<<"Catch "<<a<<endl;
    }
    return 0;
}
/**
    The general form...
    try{
        //protected code
    }catch(Exception name1){
        //catch block
    }catch(Exception name2){
        //catch block
    }catch(Exception nameN){
        //catch block
    }
*/
