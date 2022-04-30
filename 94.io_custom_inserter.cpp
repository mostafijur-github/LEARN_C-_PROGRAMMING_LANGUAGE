/// IO Custom Inserter <<
#include<iostream>
using namespace std;
class demo{
public:
    int sid;
    string name;
    demo(int i,string n){sid=i; name=n;}
};
ostream &operator << (ostream &stream,demo obj){
    stream << obj.sid << " ";
    stream << obj.name << endl;
    return stream;
}
int main()
{
    demo first(1,"Rahim");
    demo second(2,"Rakib");
    cout<<first;
    cout<<second;
    return 0;
}
