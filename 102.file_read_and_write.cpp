///File read and write
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
struct student{
    int id;
    char name[50];
};
int main()
{
    struct student a,b;
    strcpy(a.name,"Rahim");
    a.id = 1;
    ofstream out("102info.txt");
    if(!out) cout<<"Can't open file"<<endl;
    else{
        out.write((char *) &a, sizeof(struct student));
        out.close();
    }
    ifstream in("102info.txt");
    if(!in) cout<<"Can't open file"<<endl;
    else{
        in.read((char *) &b, sizeof(struct student));
        cout<<"Id:"<<b.id<<endl;
        cout<<"Name:"<<b.name<<endl;
        in.close();
    }
    return 0;
}
