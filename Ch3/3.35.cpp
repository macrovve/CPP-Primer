#include<iostream>
using namespace std;

int main()
{
    const int size=10;
    int arr[size];
    for(auto ptr=arr;ptr!=arr+size;++ptr)
    {
        *ptr=0;
    }
    for(auto i:arr)
    {
        cout<<i;
    }
    cout<<endl;
}
