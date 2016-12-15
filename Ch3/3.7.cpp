#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    //这里改成直接改成char是修改不了s的值，除非改成char &
    for(char c:s)
        c='X';
    cout<<s<<endl;
}
