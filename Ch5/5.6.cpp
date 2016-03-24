#include<iostream>
using namespace std;

int main()
{
    char rate;
    for(double grade;cin>>grade;)
    {
        rate =  (grade>=90)? 'A':
                (grade>=80)? 'B':
                (grade>=70)? 'C':
                (grade>=60)? 'P': 'F';
        cout<<rate<<endl;
    }
}
