///File put and get character
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out("101test.txt");
    if(!out) cout<<"Can't open file"<<endl;
    else{
        int i=0;
        char ch[200]="North Bengal International University.";
        while(ch[i]!='.'){
            out.put(ch[i]);
            i++;
        }
        out.close();
    }
    ifstream inp("101test.txt");
    if(!inp) cout<<"Can't open file"<<endl;
    else{
        while(inp){
            char ch;
            inp.get(ch);
            if(inp) cout<<ch;
        }
        inp.close();
    }
    return 0;
}

