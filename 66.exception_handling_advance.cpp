///Exception Handling advance
#include<iostream>
using namespace std;
void positive(int a){
    cout<<a<<endl;
    if(a<1){
       throw a;
    }
}
int main(){
    try{
        cout<<"Try"<<endl;
        cout<<"Throw "<<1<<endl;
        throw 1;
        cout<<"Try end"<<endl;
    }catch(int a){
        cout<<"Catch "<<a<<endl;
    }
    try{
        positive(2);
        positive(-2);
        positive(3);
    }catch(int a){
        cout<<"Exception "<<a<<endl;
    }
    return 0;
}
/**
    In try when execute the throw statement then terminate the
    next statement of try block.
*/

