/// IO Manipulators setw(set_width),setprecesion,setfill
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    cout<<setw(10)<<setfill('.')<<"NBIU"<<endl;
    cout<<setprecision(5)<<123.2345<<endl;


    return 0;
}


