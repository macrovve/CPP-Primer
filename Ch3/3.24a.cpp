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
    if(ivec.size()==1)
    {
        cout<<"there is only one integer "<<ivec[0]<<",it doesn't have any adjacent elements"<<endl;
        return -1;
    }
    for(auto it=ivec.cbegin();it!=ivec.cend()-1;it++)
    {
        cout<<(*it)+*(it+1)<<endl;
    }
    return 0;

}
