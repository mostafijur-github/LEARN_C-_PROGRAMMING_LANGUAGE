///Variable scope
#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    cout<<a<<endl;
    {
        int b = 6;
        cout<<b<<endl;
    }
    float b = 6.5;
    cout<<b<<endl;
    return 0;
}
