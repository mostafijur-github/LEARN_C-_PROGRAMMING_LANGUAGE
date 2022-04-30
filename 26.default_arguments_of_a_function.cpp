///Default argument
#include<iostream>
using namespace std;

int demo(int a, int b=0)
{
    return a+b;
}
int main()
{
    cout<<demo(5)<<endl;
    return 0;
}
/***
    We can not use the first argument in the arguments list as a default value.
    for example:int demo(int a=0, int b){return a+b} are not valid.
*/

