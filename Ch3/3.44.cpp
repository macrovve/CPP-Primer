#include<iostream>
using namespace std;

int main()
{
    using int_array=int [4];

    int ia[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<"use type alias"<<endl;
    cout<<"range for "<<endl;
    for(int_array &row :ia)
    {
        for(int col:row)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

    cout<<"for loop"<<endl;
    for(size_t i=0;i<3;++i)
    {
        for(size_t j=0;j<4;++j)
        {
            cout<<ia[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"pointer"<<endl;
    for(int_array *p=ia;p!=ia+3;++p)
    {
        for(int *q=(*p);q!=*p+4;++q)
        {
            cout<<*q<<" ";
        }
        cout<<endl;
    }
}
