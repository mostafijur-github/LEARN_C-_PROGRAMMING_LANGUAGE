///File flush
#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    ofstream out;
    ifstream in;
    out.open("105text.txt");
    in.open("105text.txt");
    out<<"Hello";
    out.flush();
    char str[50];
    in>>str;
    cout<<str<<endl;
    out.close();
    in.close();
    return 0;
}
