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

    for(auto itl=ivec.cbegin(),itr=ivec.cend()-1;itl<=itr;++itl,--itr)
    {
        cout<<(*itl)+(*itr)<<endl;
    }

}

