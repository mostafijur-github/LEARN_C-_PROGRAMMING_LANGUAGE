///Constructor
#include<iostream>
using namespace std;
class rectangle
{
    int height;
    int width;
public:
    rectangle(){
        height = 6;
        width = 5;
        cout<<"In rectangle class(constructor)."<<endl;
        cout<<"Area = "<<height*width<<endl;
    }
};
class rectangle2
{
    int height;
    int width;
public:
    rectangle2(int,int);
};
rectangle2::rectangle2(int h,int w){
    height = h;
    width = w;
    cout<<"In rectangle2 class(constructor)."<<endl;
    cout<<"Area = "<<height*width<<endl;
}
int main()
{
    rectangle obj;
    rectangle2 obj2(5,4);
    return 0;
}
/***
    A constructor function in a class will create as the same(class) name when we create an objects.
    And it call automatically.
    The constructor function can not return a value but it take parameters.
*/
