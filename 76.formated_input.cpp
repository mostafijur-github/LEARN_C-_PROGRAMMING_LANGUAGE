///Formated input
#include<iostream>
using namespace std;
int main()
{
    char str[100];
    /*cin>>str;
    cout<<str<<endl;*/
    cin.getline(str,sizeof(str));
    cout<<str<<endl;
    cin.getline(str,sizeof(str),'.');
    cout<<str<<endl;
    return 0;
}
