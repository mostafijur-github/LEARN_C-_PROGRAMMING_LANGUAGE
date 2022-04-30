///Reading text from a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream inp("99text.txt");
    if(!inp) cout<<"Can't open file"<<endl;
    else{
        string str;
        inp>>str;
        cout<<str<<endl;
        inp.close();
    }
    return 0;
}
