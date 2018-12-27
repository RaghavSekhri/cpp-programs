#include <iostream>
#include <string.h>
using namespace std;

 string a[9]={"1","2","3","4","5","6","7","8","9"};

void design()
{
    cout<<"   |   |   \n";
    cout<<" "<<a[0]<<" | "<<a[1]<<" | "<<a[2]<<" \n";
    cout<<"___|___|___\n";
    cout<<"   |   |   \n";
    cout<<" "<<a[3]<<" | "<<a[4]<<" | "<<a[5]<<" \n";
    cout<<"___|___|___\n";
    cout<<"   |   |   \n";
    cout<<" "<<a[6]<<" | "<<a[7]<<" | "<<a[8]<<" \n";
    cout<<"   |   |   \n";
}
int main()
{
   string y;
   int i,j,k,l;
    design();
    cout<<"Player 1,enter a number : ";
    cin>>y;
    for(i=0;i<9;i++)
    {
        if(y==a[i])
            a[i]="x";
    }
    design();
    cout<<"Player 2,enter a number : ";
    cin>>y;
     for(i=0;i<9;i++)
    {
        if(y==a[i])
            a[i]="o";
    }
    design();
    cout<<"Player 1,enter a number : ";
    cin>>y;
    for(i=0;i<9;i++)
    {
        if(y==a[i])
            a[i]="x";
    }
    design();
    cout<<"Player 2,enter a number : ";
    cin>>y;
     for(i=0;i<9;i++)
    {
        if(y==a[i])
            a[i]="o";
    }
    design();
    cout<<"Player 1,enter a number : ";
    cin>>y;
    for(i=0;i<9;i++)
    {
        if(y==a[i])
            a[i]="x";
    }
    design();

    cout<<"Player 2,enter a number : ";
    cin>>y;
     for(i=0;i<9;i++)
    {
        if(y==a[i])
            a[i]="o";
    }
    design();
    cout<<"Player 1,enter a number : ";
    cin>>y;
    for(i=0;i<9;i++)
    {
        if(y==a[i])
            a[i]="x";
    }
    design();
    cout<<"Player 2,enter a number : ";
    cin>>y;
     for(i=0;i<9;i++)
    {
        if(y==a[i])
            a[i]="o";
    }
    design();
    cout<<"Player 1,enter a number : ";
    cin>>y;
    for(i=0;i<9;i++)
    {
        if(y==a[i])
            a[i]="x";
    }
    design();
    return 0;
}
