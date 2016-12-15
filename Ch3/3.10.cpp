#include<iostream>
using namespace std;

int main()
{
    for(string s;getline(cin,s);cout<<endl)
        for (auto c:s)
            if(!ispunct(c))
                cout<<c;
}
