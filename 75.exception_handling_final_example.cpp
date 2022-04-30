///Exception handling final example
#include<iostream>
using namespace std;
void divide(double numerator,double denominator){
    try{
        if(denominator==0) throw 0;
        cout<<"Result = "<<numerator/denominator<<endl;
    }catch(int a){
        cout<<"Can't divide something by zero"<<endl;
    }
}
int main()
{
    double num,denom;
    do{
        cout<<"Enter numerator(0 to stop):";
        cin>>num;
        if(num==0){break;}
        cout<<"Enter denominator:";
        cin>>denom;
        divide(num,denom);
    } while(num);
    return 0;
}
