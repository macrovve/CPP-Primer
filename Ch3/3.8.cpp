#include<iostream>
using namespace std;

int main()
{
    string s("hello world");

    decltype(s.size()) i=0;
    while(i<s.size())   s[i++]='A';
    cout<<s<<endl;

    for(i=0;i<s.size();++i) s[i]='B';
    cout<<s<<endl;
}
