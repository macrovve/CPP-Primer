#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int num;
    vector<int> v;
    while(cin>>num)
    {
        v.push_back(num);
    }

    if(v.empty()){
        cout<<"input at least one integer"<<endl;
        return -1;
    }

    if(v.size()==1)
    {
        cout<<"there is only one integer"<<v[0]<<"it doesn't have any adjacent elements"<<endl;
        return -1;
    }

    for(int i=0;i<v.size()-1;i++)
    {
        cout<<v[i]+v[i+1]<<endl;
    }
}
