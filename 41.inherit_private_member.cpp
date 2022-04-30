///Inherit private member
#include<iostream>
using namespace std;
class demo{
private:
    int roll;
    int mark;
public:
    void setValue(int a, int b){roll = a; mark = b;}
    void print(){
        cout<<"roll = "<<roll<<endl;
        cout<<"mark = "<<mark<<endl;
        }
};
class result : public demo{
public:
    void mesg(){
        cout<<"In derive class public inheritance..."<<endl;
        }
};
class result2:protected demo{
public:
    void call(){setValue(3,74); print();}
};
class result3:private demo{
public:
    void call(){setValue(4,72); print();}
};
int main(){
    cout<<"In base class..."<<endl;
    demo od;
    od.setValue(1,70);
    od.print();
    result obj1;
    obj1.mesg();
    obj1.setValue(2,75);
    obj1.print();
    cout<<"In derive class protected inheritance..."<<endl;
    result2 obj2;
    obj2.call();
    cout<<"In derive class private inheritance..."<<endl;
    result3 obj3;
    obj3.call();
}
/**
    /// We can not inherit the public member.
    When we inherit private member with public mode then derive class...
    *public member are public
    *protected member are protected
    *private member are private
    ///Example
    class result{
    private:
         int roll,mark;
    public:
        void setValue(int a, int b){roll = a; mark = b;}
        void print(){
        cout<<"roll = "<<roll<<endl;
        cout<<"mark = "<<mark<<endl;
        }
    }
    When we inherit private member with protected mode then derive class...
    *public member are protected
    *protected member are protected
    *private member are private
    ///Example
    class result{
    private:
         int roll,mark;
    protected:
        void setValue(int a, int b){roll = a; mark = b;}
        void print(){
        cout<<"roll = "<<roll<<endl;
        cout<<"mark = "<<mark<<endl;
        }
    public:
        void call(){setValue(3,74); print();}
    }
   When we inherit private member with private mode then derive class...
    *public member are private
    *protected member are private
    *private member are private
    ///Example
    class result{
    private:
        int roll,mark;
        void setValue(int a, int b){roll = a; mark = b;}
        void print(){
        cout<<"roll = "<<roll<<endl;
        cout<<"mark = "<<mark<<endl;
        }
    public:
        void call(){setValue(3,74); print();}
    }
*/

