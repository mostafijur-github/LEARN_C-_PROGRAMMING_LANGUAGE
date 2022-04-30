///Exception handling terminate and unexpected
#include<iostream>
using namespace std;
void demo()/*throw(double)*/// this for unexpected*Exception handling
{
    throw 1.5;
}
void termi(){
    cout<<"Terminate the program"<<endl;
}
void unex(){
    cout<<"Unexpected statement"<<endl;
}
int main()
{
    set_terminate(termi);
    set_unexpected(unex);
    try{
        demo();
    }catch(int a){
        cout<<a<<endl;
    }
    return 0;
}
