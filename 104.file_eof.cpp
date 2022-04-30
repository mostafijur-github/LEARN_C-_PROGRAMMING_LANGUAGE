///File eof
#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    ifstream in;
    in.open("99text.txt");
    if(!in) cout<<"Can't open file"<<endl;
    else{
        char str[100];
        while(!in.eof()){
        in.getline(str,100,'.');
        cout<<str<<endl;
        }
        in.close();
    }

    return 0;
}

