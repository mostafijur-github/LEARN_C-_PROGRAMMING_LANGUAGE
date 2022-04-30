///Template interchange example
#include<iostream>
using namespace std;
template <class temp>
void interchange(temp &a, temp &b)
{
    temp t;
    t = a;
    a = b;
    b = t;
}
int main(){
    int a,b;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    interchange(a,b);
    cout<<"After interchange.."<<endl;
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
}
