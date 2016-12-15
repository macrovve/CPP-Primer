#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> ivec;
    for(int num;cin>>num;ivec.push_back(num));
    if(ivec.empty())
    {
        cout<<"input at least one integer"<<endl;
        return -1;
    }

    for(int i=0;i<(ivec.size()+1)/2;i++)
    {
        cout<<ivec[i]+ivec[ivec.size()-1-i]<<endl;
    }
    return 0;
}
