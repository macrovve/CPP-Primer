#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    const char ca1[]="Hello";
    const char ca2[]="world";
    constexpr auto length=strlen(ca1)+strlen(" ")+strlen(ca2)+1;
    char ca3[length];

    strcpy(ca3,ca1);
    strcat(ca3," ");
    strcat(ca3,ca2);
    cout<<ca3<<endl;
}
