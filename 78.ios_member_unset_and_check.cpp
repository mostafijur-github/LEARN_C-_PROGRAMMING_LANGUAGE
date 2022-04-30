///IOS Member(flag) Unset and Check.
#include<iostream>
using namespace std;
int main()
{
    cout<<14.345<<endl;
    cout.setf(ios::showpoint); //Here we set a flag
    cout<<14.345<<endl;
    cout.unsetf(ios::showpoint); //Here we unset a flag
    cout<<14.345<<endl;
    cout.setf(ios::scientific); //Here we set a flag
    cout<<14.345<<endl;
    cout.unsetf(ios::scientific); //Here we unset a flag
    cout<<14.345<<endl;
    cout.unsetf(ios::basefield);
    cout.setf(ios::hex);           /*Here we could not unset the basefield then the setf(hex) not work*/
    cout.setf(ios::uppercase);
    cout<<1000<<endl;

    cout.setf(ios::showbase);
    cout<<1000<<endl;

    ios::fmtflags obj;
    obj = cout.flags();
    if(obj & ios::showbase){
        cout<<"Showbase is set."<<endl;
    }
    else{
         cout<<"Showbase is not set."<<endl;
    }
    cout.unsetf(ios::showbase);
    obj = cout.flags();
    if(obj & ios::showbase){
        cout<<"Showbase is set."<<endl;
    }
    else{
         cout<<"Showbase is not set."<<endl;
    }
    return 0;
}
