///const(constant)variable
#include<iostream>
using namespace std;
class constExample{
public:
    int a = 5;
    void change(int x) const
    {
        x = 1;
        x = a + x;
        cout<<x<<endl;
    }
    };
int main()
{
    const int constant = 5;
    cout<<constant<<endl;
    constExample obj;
    obj.change(obj.a);
    ///const reference
    int c = 12;
    const int &r = c;
    cout<<r<<endl;
    return 0;
}
/***
    When we declare a variable as a const then we does not change it
    and assign the value when we declare it.we can use it every ware the program.
    The const member function in a class it can not change the value of other member variable of this class
    but it can access the member variable.
*/
