#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    //����ĳ�ֱ�Ӹĳ�char���޸Ĳ���s��ֵ�����Ǹĳ�char &
    for(char c:s)
        c='X';
    cout<<s<<endl;
}
