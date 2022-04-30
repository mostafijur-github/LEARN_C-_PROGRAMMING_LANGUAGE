///File seekg()[g->get], seekp()[p->put]
#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    ofstream out;
    out.open("106test.txt");
    if(!out) cout<<"Can't open file"<<endl;
    else{
        out<<"Hello";
        out.seekp(5);
        out<<"world";
        out.close();
    }
    ifstream in;
    in.open("106test.txt");
    if(!in) cout<<"Can't open file"<<endl;
    else{
    char str[50];
    in.seekg(3);
    in>>str;
    cout<<str<<endl;
    in.close();
    }
    return 0;
}
