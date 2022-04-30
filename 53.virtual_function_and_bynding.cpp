///Virtual function and bynding
#include<iostream>
using namespace std;
class sound{
public:
    virtual void print(){cout<<"Your sound"<<endl;}
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
    sound sob;
    dog dob;
    cat cob;
    sound *ptr;
    ptr = &sob;
    ptr->print();
    ptr = &dob;
    ptr->print();
    ptr = &cob;
    ptr->print();
    return 0;
}
