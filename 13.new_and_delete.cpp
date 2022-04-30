///new and delete
#include<iostream>
using namespace std;

int main()
{
    int *ptr,*ptr2,*ptr3;
    ptr = new int(5);
    ptr2 = new int;
    ptr3 = new int[5];
    *ptr2 = 7;
    cout<<"ptr variable = "<<*ptr<<endl;
    cout<<"ptr2 variable = "<<*ptr2<<endl;
    cout<<"ptr3 array....."<<endl;
    ptr3[0] = 2;
    ptr3[1] = 3;
    ptr3[2] = 4;
    ptr3[3] = 6;
    ptr3[4] = 8;
    for(int i=0;i<5;i++)
    {
        cout<<ptr3[i]<<endl;
    }
    delete(ptr,ptr2);
    delete [] ptr3;
    return 0;
}
/***
    new and delete are used for create dynamic allocation.
    new allocates memory dynamically.
    and delete free the pointer.
*/
