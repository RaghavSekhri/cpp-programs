//call by value
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    void swap1(int,int);
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"Before calling, a = "<<a<<" & b = "<<b<<endl;
    swap1(a,b);
    cout<<"After calling, a = "<<a<<" & b = "<<b<<endl;
    return 0;
}

void swap1(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"The values of a and b inside function is : "<<x<<" & "<<y<<endl;
}
