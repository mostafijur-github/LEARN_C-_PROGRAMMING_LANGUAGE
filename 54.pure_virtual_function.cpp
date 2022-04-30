///Pure Virtual function
#include<iostream>
using namespace std;
class sound{
public:
    virtual void print()=0;
};
class dog:public sound{
public:
    virtual void print(){cout<<"Ghew"<<endl;}
};
class cat:public sound{
public:
    virtual void print(){cout<<"Meau"<<endl;}
};
int main()
{
    dog dob;
    cat cob;
    sound *ptr;
    ptr = &dob;
    ptr->print();
    ptr = &cob;
    ptr->print();
    return 0;
}

