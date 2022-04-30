///File modes-> out,in,app(append)
#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    ofstream out("108test.txt");
    if(!out) cout<<"Can't open file"<<endl;
    else{
        out<<"Hello world";
        out.close();
    }
    ofstream app("108test.txt",ios::app);
    if(!app) cout<<"Can't open file"<<endl;
    else{
        app<<"Hello world";
        app.close();
    }
    return 0;
}
