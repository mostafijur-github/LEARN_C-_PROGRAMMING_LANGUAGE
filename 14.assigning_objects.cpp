///Assigning objects
#include<iostream>
using namespace std;

class rectangle{
    int height;
    int width;
public:
    void set_func(int,int);
    int area();
};
void rectangle::set_func(int a,int b){
    height = a;
    width = b;
}
int rectangle::area(){
    return height*width;
}
int main()
{
    rectangle obj,obj2;
    obj.set_func(5,4);
    obj2.set_func(6,5);
    cout<<"Area = "<<obj.area()<<endl;
    cout<<"Area = "<<obj2.area()<<endl;
    obj2 = obj;
    cout<<"Area = "<<obj.area()<<endl;
    cout<<"Area = "<<obj2.area()<<endl;
    return 0;
}
/***
    In object assign the class should be same.
*/
