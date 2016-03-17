#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

bool isDiff(int const *a_begin,int const *a_end,int const *b_begin,int const *b_end)
{
    if((a_end-a_begin)!=(b_end-b_begin))
        return true;
    for(auto i=a_begin,j=b_begin;i!=a_end&&j!=b_end;++i,++j)
    {
        if(*i!=*j)
            return true;
    }
    return false;
}


int main()
{
    int arr1[] ={1,2,3,4,5};
    int arr2[] ={1,2,3,4,6};
    if(isDiff(begin(arr1),end(arr1),begin(arr2),end(arr2)))
        cout<<"These arrays is different"<<endl;
    else
        cout<<"These arrays is same"<<endl;

    vector<int> vec1={1,2,3,4,5};
    vector<int> vec2={1,2,3,4,5};
    if(vec1!=vec2)
        cout<<"These vectors is different"<<endl;
    else
        cout<<"These vectors is same"<<endl;

}
