#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    const char ca1[]="hello world";
    const char ca2[]="hi world";
    string s1="hello world";
    string s2="hi world";
    if(s1<s2)
        cout<<s1<<endl;
    else
        cout<<s2<<endl;
    if(strcmp(ca1,ca2))
        cout<<ca1<<endl;
    else
        cout<<ca2<<endl;
}

