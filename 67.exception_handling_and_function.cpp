///Exception Handling and function
#include<iostream>
using namespace std;
void positive(int a){
    cout<<a<<endl;
    try{
        if(a<1){
            throw a;
        }
    }catch(int a){
        cout<<"Exception "<<a<<endl;
    }
}
int main(){
        positive(2);
        positive(-2);
        positive(3);
    return 0;
}

