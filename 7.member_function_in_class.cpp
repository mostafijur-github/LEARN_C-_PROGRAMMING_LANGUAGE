///Member functions
#include<iostream>
using namespace std;

class rectangle{
public:
    int height;
    int width;
    int area();
};
int rectangle::area()
{
    return height*width;
}
int main()
{
    rectangle obj;
    obj.height = 5;
    obj.width = 6;
    cout<<"Area = "<<obj.area()<<endl;
    return 0;
}

