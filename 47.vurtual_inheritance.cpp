///Virtual Inheritance
#include<iostream>
using namespace std;
class mid{
public:
    int mr;
};
class f_exam:virtual public mid{
public:
    int fr;
};
class extra:virtual public mid{
public:
    int er;
};
class number:public f_exam, public extra{
public:
    void setValue();
    int add(){return mr+fr+er;}
};
int main(){
    number obj;
    obj.setValue();
    cout<<"Total = "<<obj.add()<<endl;
    return 0;
}
void number::setValue(){
    cout<<"Mid:";
    cin>>mr;
    cout<<"Final:";
    cin>>fr;
    cout<<"Extra:";
    cin>>er;
}
