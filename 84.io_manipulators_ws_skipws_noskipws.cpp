/// IO Manipulators ws(white space), skipws, noskipws.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char ch,ch2;
    cin>>noskipws>>ch;
    cout<<ch<<endl;
    cin>>ws>>ch2;
    cout<<ch2<<endl;
    return 0;
}
