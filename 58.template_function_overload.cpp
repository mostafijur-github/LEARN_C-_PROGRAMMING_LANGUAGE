///Template function overload
#include<iostream>
using namespace std;

template <class temp>
void print(temp a)
{
    cout<<a<<endl;
}
template <class temp,class temp2>
void print(temp a, temp2 b)
{
    cout<<a<<" "<<b<<endl;
}
int main()
{
    print(4);
    print(3,4.5);
}

