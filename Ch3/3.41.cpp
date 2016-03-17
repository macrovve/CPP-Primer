#include<iostream>
#include<iterator>
#include<vector>
using namespace std;

int main()
{
    int array[]={1,2,3,4,5,6};
    vector<int> vec(begin(array),end(array));
    for(auto i:vec)
        cout<<i;
    cout<<endl;
}

