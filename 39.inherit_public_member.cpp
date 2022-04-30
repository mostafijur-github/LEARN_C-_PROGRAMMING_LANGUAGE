///Inherit public member
#include<iostream>
using namespace std;
class demo{
public:
    int roll;
    int mark;
};
class result : public demo{
    public:
    void mesg(){
        cout<<"In derive class public inheritance..."<<endl;
        }
};
class result2:protected demo{
public:
    void setValue(int a, int b){roll = a; mark = b;}
    void print(){
        cout<<"roll = "<<roll<<endl;
        cout<<"mark = "<<mark<<endl;
        }
};
class result3:private demo{
public:
    void setValue(int a, int b){roll = a; mark = b;}
    void print(){
        cout<<"roll = "<<roll<<endl;
        cout<<"mark = "<<mark<<endl;
        }
};
int main(){
    cout<<"In base class..."<<endl;
    demo od;
    od.roll = 1;
    od.mark = 76;
    cout<<"roll = "<<od.roll<<endl;
    cout<<"mark = "<<od.mark<<endl;
    result obj1;
    obj1.mesg();
    obj1.roll = 1;
    obj1.mark = 76;
    cout<<"roll = "<<obj1.roll<<endl;
    cout<<"mark = "<<obj1.mark<<endl;
    cout<<"In derive class protected inheritance..."<<endl;
    result2 obj2;
    obj2.setValue(2,78);
    obj2.print();
    cout<<"In derive class private inheritance..."<<endl;
    result3 obj3;
    obj3.setValue(3,73);
    obj3.print();
}
/**
    /// We can not inherit the private member.
    When we inherit public member with public mode then derive class...
    *public member are public
    *protected member are protected
    *private member are private
    ///Example
    class result{
    public:
        int roll,mark;
    }
    When we inherit public member with protected mode then derive class...
    *public member are protected
    *protected member are protected
    *private member are private
    ///Example
    class result2{
    protected:
        int roll,mark;
    public:
        void setValue(int a, int b){roll = a; mark = b;}
        void print(){
        cout<<"roll = "<<roll<<endl;
        cout<<"mark = "<<mark<<endl;
        }
    }
    When we inherit public member with private mode then derive class...
    *public member are private
    *protected member are private
    *private member are private
    ///Example
    class result3{
    private:
        int roll,mark;
    public:
        void setValue(int a, int b){roll = a; mark = b;}
        void print(){
        cout<<"roll = "<<roll<<endl;
        cout<<"mark = "<<mark<<endl;
        }
    }
*/
