///Constructor and Destructor
#include<iostream>
using namespace std;
class rectangle
{
    int height;
    int width;
public:
    int area(int,int);
    rectangle();
    ~rectangle();
};
rectangle::rectangle(){
    cout<<"This is constructor function."<<endl;
}
int rectangle::area(int h,int w){
    height = h;
    width = w;
    return height*width;
}
rectangle::~rectangle(){
    cout<<"This is destructor function."<<endl;
}
int main()
{
    rectangle obj,obj2;
    cout<<"Area = "<<obj.area(5,6)<<endl;
    return 0;
}
/***
    A constructor will create  as the same(class) name when we create an objects.
    And it call automatically.
    The constructor function can not return a value but it take parameters.
    A destructor will create with ~(tile symbol and) as the same(class) name when an objects destroyed.
    And it call automatically.
    The constructor function can not return a value and not take parameters.
*/
