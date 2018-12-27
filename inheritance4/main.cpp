#include <iostream>

using namespace std;

class stud_basic
{
    int rollno;
    char name[20];
public:
    void read()
    {
        cout<<"Enter roll no and name = ";
        cin>>rollno>>name;
    }
    void show()
    {
        cout<<"Roll no = "<<rollno<<"\n";
        cout<<"Name = "<<name<<"\n";
    }
};

class result:public stud_basic
{
    int m[4];
    double per;
public:
    void input_marks();
    void cal();
    void display();
};

void result::input_marks()
{
    cout<<"Enter marks : ";
    for(int i=0;i<4;i++)
    {
        cin>>m[i];
    }
}

void result::cal()
{
    int tot_marks=0;
    for(int i=0;i<4;i++)
    {
        tot_marks=tot_marks+m[i];
        per=(double)tot_marks/4;
    }
}

void result::display()
{
    cout<<"\nDisplaying result \n";
    for(int i=0;i<4;i++)
        cout<<m[i]<<'\t';
    cout<<"\nPercentege = "<<per;
}

int main()
{
    result r1;
    r1.read();
    r1.input_marks();
    r1.cal();
    r1.show();
    r1.display();
    return 0;
}
