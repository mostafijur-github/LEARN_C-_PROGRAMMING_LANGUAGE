///Array of objects
#include<iostream>
using namespace std;

class rectangle{
    int height;
    int width;
public:
    void area(int,int);
};
void rectangle::area(int a,int b){
    height = a;
    width = b;
    cout<<"Area = "<<height*width<<endl;
}
class rectangle2{
    int height;
    int width;
public:
    rectangle2(int);
};
rectangle2::rectangle2(int a){
    height = a;
    width = a;
    cout<<"Area = "<<height*width<<endl;
}
class rectangle3{
    int height;
    int width;
public:
    rectangle3(int,int);
};
rectangle3::rectangle3(int a,int b){
    height = a;
    width = b;
    cout<<"Area = "<<height*width<<endl;
}
int main()
{
    rectangle obj[4];
    obj[0].area(2,3);
    obj[1].area(3,4);
    obj[2].area(4,5);
    obj[3].area(5,6);
    ///Constructor function whose parameter 1.
    cout<<"In constructor function."<<endl;
    rectangle2 obj2[4] = {2,3,4,5};
    ///Constructor function whose parameter 2.
    cout<<"In another constructor function."<<endl;
    rectangle3 obj3[4] = {rectangle3(2,3),rectangle3(3,4),rectangle3(4,5),rectangle3(5,6)};

    return 0;
}
