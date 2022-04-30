///Overloading and ambiguity
#include<iostream>
using namespace std;
int demo(int a,int b){return a+b;}
/*int demo(int a,int b=0){return a+b;}*//*not valid*/
/*void demo(int a,int b){cout<<a+b<<endl;} *//*not valid.*/
int demo(int a){return a;}
int main()
{
    int result;
    result = demo(2,3);
    cout<<result<<endl;
   /* result = demo(2);
    cout<<result<<endl; *//*not valid*/

    return 0;
}
/***
    We can not overload a function only change his return type but also change it's arguments in the argument list.

*/
