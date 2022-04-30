///Template more generic type
#include<iostream>
using namespace std;

template <class temp,class temp2>
void print(temp a, temp2 b)
{
    cout<<a<<" "<<b<<endl;
}
int main()
{
    print(3,4);
    print(2,4.5);
    print(1,"NBIU");
}

