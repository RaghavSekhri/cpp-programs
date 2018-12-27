#include <iostream>

using namespace std;

int main()
{
    int a[10];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    int first,second,third;
    first=second=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>first)
        {
            second=first;
            first=a[i];
        }
        else
        if(a[i]>second && a[i]!=first)
        {
            second=a[i];
        }
    }
    cout<<second;
    return 0;
}
