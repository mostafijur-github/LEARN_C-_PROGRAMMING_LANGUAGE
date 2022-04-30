///Destructor
#include<iostream>
using namespace std;
class rectangle
{
    int height;
    int width;
public:
    ~rectangle(){
        height = 6;
        width = 5;
        cout<<"In rectangle class(Destructor)."<<endl;
        cout<<"Area = "<<height*width<<endl;
    }
};
int main()
{
    rectangle obj;
    return 0;
}
/***
    A destructor will create with ~(tile symbol and) as the same(class) name when an objects destroyed.
    And it call automatically.
    The constructor function can not return a value and not take parameters.
*/
