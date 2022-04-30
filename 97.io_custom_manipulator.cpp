/// IO Custom Manipulator
#include<iostream>
using namespace std;

ostream &sethex (ostream &stream){
    stream.setf(ios::hex | ios::showbase);
    return stream;
}
ostream &hrb(ostream &stream){
    stream<<"\n---------------\n";
    return stream;
}
int main()
{
    cout<<hex<<45<<endl;
    cout<<sethex<<45<<endl;
    cout<<hrb<<"NBIU Rajshahi"<<hrb<<endl;
    return 0;
}
