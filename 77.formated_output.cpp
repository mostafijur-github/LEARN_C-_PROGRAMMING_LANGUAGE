#include<iostream>

using namespace std;

int main()
{
    cout<<12.345<<endl;
    cout.setf(ios::showpoint);
    cout<<12.345<<endl;
    cout.setf(ios::scientific);
    cout<<12.345<<endl;
    cout.setf(ios::showpos);
    cout<<12.345<<endl;
    return 0;
}
/**
    Formated Output...
    1.ios class member,ios->Input Output Stream
    general form;
        stream.setf(flag)
     e.g:cout.setf(ios::showpoint);
    2.manipulators
    general form;
        #include<iomanip>
    e.g:cout<<hex<<100;
*/
