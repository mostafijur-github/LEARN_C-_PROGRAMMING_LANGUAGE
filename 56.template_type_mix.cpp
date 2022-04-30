///Template type mix
#include<iostream>
using namespace std;

template <class temp>
void print(temp a)
{
    cout<<a<<endl;
}
int main()
{
    print(4);
    print(4.5);
    print("NBIU");
}
