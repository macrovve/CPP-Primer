#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<string> s;
    string word;
    while(cin>>word)
    {
        for(auto &i:word)
            i=toupper(i);
        s.push_back(word);
    }
    for(auto i:s)
        cout<<i<<endl;
}
