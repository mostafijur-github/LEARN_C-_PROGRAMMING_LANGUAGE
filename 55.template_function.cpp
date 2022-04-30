///Template function
#include<iostream>
using namespace std;
template <class temp>
temp add(temp a, temp b){
    return a+b;
}
int main(){
    int a,b;
    a = 5;
    b = 6;
    cout<<add(a,b)<<endl;
    double d1,d2;
    d1 = 2.9;
    d2 = 3.6;
    cout<<add(d1,d2)<<endl;
    string s1,s2;
    s1 = "NBIU";
    s2 = " Rajshahi";
    cout<<add(s1,s2)<<endl;
    return 0;
}
/**
    The temple automatically generate the following class
    int add(int a, int b){
    return a+b;
    }
    double add(double a, double b){
    return a+b;
    }
    string add(string a, string b){
    return a+b;
    }
*/
