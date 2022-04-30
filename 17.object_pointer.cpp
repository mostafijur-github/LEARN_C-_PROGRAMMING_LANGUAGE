///Object pointer
#include<iostream>
using namespace std;

class rectangle{
    int height;
    int width;
public:
    int area(int,int);
};
int rectangle::area(int a,int b){
    height = a;
    width = b;
    return height*width;
}

int main()
{
    rectangle *ptr;
    ptr = new rectangle;
    cout<<ptr->area(4,5)<<endl;
    delete(ptr);
    return 0;
}
/***

*/

