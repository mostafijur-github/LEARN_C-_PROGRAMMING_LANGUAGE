///Hybrid Inheritance
#include<iostream>
using namespace std;
class info{
    int id;
public:
    int getId(){cout<<"Enter id:"; cin>>id; return id;}
};
class lab{
    int l_mark;
public:
    int getlmark(){cout<<"Enter lab mark:"; cin>>l_mark; return l_mark;}
};
class number:public lab{
    int mark;
public:
    int getmark(){cout<<"Enter  mark:"; cin>>mark; return mark+getlmark();}
};
class result:public info, public number{
public:
    void getResult(){
        int sid = getId();
        int num = getmark();
        cout<<"Id = "<<sid<<"\nMark = "<<num<<endl;
    }
};
int main(){
    result obj;
    obj.getResult();
    return 0;
}
