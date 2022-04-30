///Subscript Operator Overloading
#include<iostream>
using namespace std;
class number{
    int x,arr[10];
public:
    number(){
        x = 1;
        for(int i=1;i<=10;i++){
            arr[i-1] = i*x;
        }
    }
    void setValue(int a){
         x = a;
        for(int i=1;i<=10;i++){
            arr[i-1] = i*x;
        }
        }
    int operator [] (int a);   /* Assignment operator overloading */
};
int number::operator[](int a){
    return arr[a-1];
}
int main(){
    number n1;
    int a,b;
    char c;
    cout<<"Enter your value 1-10 e.g(1X3)"<<endl;
    cin>>a>>c>>b;
    n1.setValue(a);
    cout<<n1[b]<<endl;
    return 0;
}
