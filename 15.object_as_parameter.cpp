///Object as a parameter
#include<iostream>
using namespace std;

class rectangle{
    int height;
    int width;
public:
    void value_set(int height,int width){
        this->height = height;
        this->width = width;}
    int area(){return height*width;}
};
void print(rectangle temp_obj)
{
    cout<<"Area = "<<temp_obj.area()<<endl;
}
rectangle scan()
{
    int h,w;
    cout<<"Enter height and width:";
    cin>>h>>w;
    rectangle temp_obj;
    temp_obj.value_set(h,w);
    return temp_obj;
}
int main()
{
    rectangle obj;
    obj.value_set(5,6);
    print(obj);
    ///object as return type
    obj = scan();
    print(obj);
    return 0;
}
/***

*/



