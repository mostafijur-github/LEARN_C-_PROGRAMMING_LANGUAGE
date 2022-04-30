///Function overriding
#include<iostream>
using namespace std;
class base{
public:
    void print(){cout<<"Base"<<endl;}
};
class derive:public base{
public:
    void print(){cout<<"Derive"<<endl;}
};
int main(){
    derive obj;
    obj.print();
    return 0;
}
/**In inheritance when we use two or more function as same name
    then it override the function though we use different parameter in the
    parameter list still override the function.
*/
