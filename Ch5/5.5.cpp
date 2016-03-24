#include<iostream>
using namespace std;

int main()
{
    char rate;
    for(double grade;cin>>grade;)
    {
        if(grade>=90)
        {
            rate='A';
        }
        else if(grade>=80)
        {
            rate='B';
        }
        else if(grade>=70)
        {
            rate='C';
        }
        else if(grade>=60)
        {
            rate='P';
        }
        else
        {
            rate='F';
        }
        cout<<rate<<endl;
    }
}
