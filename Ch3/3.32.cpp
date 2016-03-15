#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int num1[10];
    for(auto i=0;i<10;++i)
        num1[i]=i;
    for(auto i :num1)
        cout<<i<<" ";
    cout<<endl;

    int num2[10];
    for(auto i=0;i<10;++i)
        num2[i]=num1[i];
    for(auto i :num2)
        cout<<i<<" ";
    cout<<endl;

    vector<int> v1(10);
    for(auto i=0;i!=10;++i)
        v1[i]=i;
    vector<int> v2(v1);
    for(auto i:v2)
        cout<<i<<" ";
    cout<<endl;



}


