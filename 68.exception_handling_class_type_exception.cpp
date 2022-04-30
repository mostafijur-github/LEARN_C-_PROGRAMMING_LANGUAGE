///Exception Handling class type exception
#include<iostream>
using namespace std;

class excep{
    int id=0;
    string name="Not a positive number.";
public:
    excep(){id++;}
    void setValue(){id++;}
    void print(){cout<<"Error id "<<id<<":"<<name<<endl;}
};

void positive(int a){
    cout<<a<<endl;
    try{
        if(a<1){
            throw excep();
        }
    }catch(excep e){
        e.print();
    }
}

int main(){
        positive(2);
        positive(-2);
        positive(3);
    return 0;
}


