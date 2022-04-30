///Writing text into a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream first("99text.txt");
    /*first<<"NBIU, Rajshahi";
    first.close();*/
    /**------OR----------**/
    if(!first) cout<<"Can't open file"<<endl;
    else{
        first<<"North Bengal International University";
        first.close();
    }
    return 0;
}
