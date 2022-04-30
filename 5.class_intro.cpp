#include<iostream>
using namespace std;

class rectangle{
public:
    int height;
    int width;
};
int main()
{
    rectangle obj;
    obj.height = 3;
    obj.width = 2;
    cout<<"Area = "<<obj.height*obj.width<<endl;
    return 0;
}
