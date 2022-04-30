///This pointer
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
int main()
{
    rectangle obj;
    obj.value_set(5,6);
    cout<<"Area = "<<obj.area()<<endl;
    return 0;
}
/***

*/


