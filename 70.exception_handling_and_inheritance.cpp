///Exception handling and inheritance
#include<iostream>
using namespace std;

class Base{
};

class Derive:public Base{
};

int main()
{
    Base b;
    Derive d;
    try{
        throw d;
    }catch(Base e){
        cout<<"Base Exception"<<endl;
    }catch(Derive e){
        cout<<"Derive Exception"<<endl;
    }
    return 0;
}
