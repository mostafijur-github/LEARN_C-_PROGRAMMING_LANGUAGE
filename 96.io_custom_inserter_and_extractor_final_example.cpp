/// IO Custom Inserter and Extractor final example
/**
    *
   * *
  * * *
*/
#include<iostream>
using namespace std;
class triangle{
public:
    int n;
    triangle(){}
    triangle(int x){n=x;}
};
istream &operator >>(istream &stream, triangle &obj){
    stream>>obj.n;
    return stream;
}
ostream &operator << (ostream &stream, triangle obj){
    int i,j;
    for(i=1;i<=obj.n;i++){
        for(j=1;j<=(obj.n-i);j++){
            stream << " ";
            }
        for(j=1;j<=(2*i-1);j++){
            stream << "*";
        }
        stream<<endl;
    }
    return stream;
}
int main()
{
    triangle ob;
    cin>>ob;
    cout<<ob;
    return 0;
}
