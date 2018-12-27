#include <iostream>
#include<stdio.h>

using namespace std;

class student
{
    char name[20];
    int roll_no;
    int marks[6];
public:
    void getdata();
    void tot_marks();
};

void student::getdata()
{
    cout<<"Enter your name : ";
    gets(name);
    cout<<"Enter your roll no : ";
    cin>>roll_no;
    int i;
    for(i=1;i<=6;i++)
    {
        cout<<"Enter your marks in subject "<<i<<": ";
        cin>>marks[i];
    }
}

void student::tot_marks()
{
    int i,sum=0;
    for(i=1;i<=6;i++)
    {
        sum=sum+marks[i];
    }
    cout<<"Total marks of the student is : "<<sum;
}

int main()
{
   student obj;
   obj.getdata();
   obj.tot_marks();
    return 0;
}
