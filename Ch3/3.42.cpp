#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec{1,2,3,4,5,6,7};
    int array[7];

    for(int i=0;i!=vec.size();++i)
    {
        array[i]=vec[i];
    }
    for(auto i:array)
        cout<<i;

    cout<<endl;
}
