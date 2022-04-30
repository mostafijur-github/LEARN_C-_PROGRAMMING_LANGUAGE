/// Private, public and protected
#include<iostream>
using namespace std;

class rectangle{
private:
    int height;
    int width;
public:
    int area(int,int);
};
int rectangle::area(int h, int w)
{
    height = h;
    width = w;
    return h*w;
}
int main()
{
    rectangle obj;
    cout<<"Area = "<<obj.area(5,6)<<endl;
    return 0;
}
/***
    The private member are accessed in the same class that can not
    accessed outside the class.
    The protected member are accessed inherently.
    The public member are accessed every where the program.
*/
