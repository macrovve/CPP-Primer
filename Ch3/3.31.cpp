#include<iostream>
using namespace std;

int main()
{
    int num[10];
    for(auto i=0;i<10;++i)
        num[i]=i;
    for(auto i :num)
        cout<<i<<" ";
    cout<<endl;
}
