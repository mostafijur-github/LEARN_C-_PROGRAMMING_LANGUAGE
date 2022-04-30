///Template function override
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
void print(char a)
{
    cout<<"Override"<<endl;
}
int main()
{
    print(4);
    print(3,4.5);
    print('A');
}


