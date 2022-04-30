/// IO Custom Extractor >>
#include<iostream>
using namespace std;
class demo{
public:
    int sid;
    string name;
    demo(){}
    demo(int i,string n){sid=i; name=n;}
};
istream &operator >>(istream &stream, demo &obj){
    cout<<"Enter Id:";
    stream>>obj.sid;
    cout<<"Enter Name:";
    stream>>obj.name;
    return stream;
}
ostream &operator << (ostream &stream,demo obj){
    stream << obj.sid << " ";
    stream << obj.name << endl;
    return stream;
}
int main()
{
    demo first;
    demo second;
    cin>>first;
    cin>>second;
    cout<<first;
    cout<<second;
    return 0;
}

