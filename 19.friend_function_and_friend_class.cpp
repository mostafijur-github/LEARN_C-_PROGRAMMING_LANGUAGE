///Friend function
#include<iostream>
using namespace std;
//This for friend class
class rectangle{
    int height;
    int width;
public:
    void setValue(int h,int w){height = h; width = w;}
private:
    int area(){cout<<"Area:"<<height*width<<endl;return height*width;}
    friend class cost;
};
class cost{
    int costRate;
public:
    void set_value(int a){costRate = a;}
    int totalCost(rectangle A){
        return costRate*A.area();
    }
};
/***A friend class all member functions can access all the private members on this class where we declare friend.
    When we declare a friend function in a class then only this function can access all the private member.*/
//This for friend functions
class rectangle2; //forward defensive
class cost2{
    int costRate;
public:
    void set_value(int a){costRate = a;}
    int totalCost(rectangle2);
};
class rectangle2{
    int height;
    int width;
public:
    void setValue(int h,int w){height = h; width = w;}
private:
    int area(){return height*width;}
    friend int cost2::totalCost(rectangle2);
};
int cost2::totalCost(rectangle2 A) {
        return costRate*A.area();
    }

int main(){
    int a,b;
    cout<<"Enter height and width:";
    cin>>a>>b;
    rectangle obj;
    obj.setValue(a,b);
    cout<<"Enter cost:";
    int c;
    cin>>c;
    cost obj2;
    obj2.set_value(c);
//    cout<<"Area = "<<obj2.area()<<endl;
    cout<<"Total cost:"<<obj2.totalCost(obj)<<endl;
    int a2,b2;
    cout<<"Enter height and width:";
    cin>>a2>>b2;
    rectangle obj3;
    obj3.setValue(a2,b2);
    cout<<"Enter cost:";
    int c2;
    cin>>c2;
    cost obj4;
    obj4.set_value(c2);
   // cout<<"Area = "<<obj3.area()<<endl;
    cout<<"Total cost:"<<obj4.totalCost(obj3)<<endl;
    return 0;
}
/**
    In friend function this pointer(*this) does not work.
*/
