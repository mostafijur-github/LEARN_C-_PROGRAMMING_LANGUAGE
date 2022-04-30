///File Open and Close
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("98.test.txt");
    if(out)
        cout<<"File open in output(write) mode"<<endl;
    else
        cout<<"Cannot open file in output(write) mode"<<endl;
    out.close();
    ifstream inp;
    inp.open("test.txt");
    if(inp)
        cout<<"File open in output(read) mode"<<endl;
    if(!inp)
        cout<<"Cannot open file in input(read) mode"<<endl;
    inp.close();
    return 0;
}
