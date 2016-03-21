#include<iostream>
using namespace std;

int main()
{
    unsigned grade;
    while(cin>>grade)
    {
        auto finalGrade=(grade>90)? "high pass"
                             : (grade>75)? "pass"
                             : (grade>60)? "low pass"
                             : "fail";
        cout<<finalGrade<<endl;

        if(grade>90)
            finalGrade="high pass";
        else if(grade>75)
            finalGrade="pass";
        else if(grade>60)
            finalGrade="low pass";
        else
            finalGrade="fail";
        cout<<finalGrade<<endl;
    }
}
