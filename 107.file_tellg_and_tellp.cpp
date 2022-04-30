///File tellg, tellp
#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    ofstream out;
    out.open("107text.txt");
    if(!out) cout<<"Can't open file"<<endl;
    else{

        cout<<out.tellp()<<endl;
        out<<"Hello world";
        cout<<out.tellp()<<endl;
        out.seekp(4);
        cout<<out.tellp()<<endl;
        out<<"Hello world";
        cout<<out.tellp()<<endl;
        out.close();
    }
    cout<<"-------or------"<<endl;
    ifstream in;
    in.open("107text.txt");
    if(!in) cout<<"Can't open file"<<endl;
    else{
    char str[100];
    cout<<in.tellg()<<endl;
    in.seekg(3);
    cout<<in.tellg()<<endl;
    in>>str;
    cout<<str<<endl;
    cout<<in.tellg()<<endl;
    in>>str;
    cout<<str<<endl;
    cout<<in.tellg()<<endl;
    in.close();
    }
    return 0;
}

