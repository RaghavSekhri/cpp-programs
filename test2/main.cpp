#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    int b[10],c[10];
    int r=0,t=0;
    for(int i=0;i<10;i++)
    {
        if(a[i]>0)
        {
            b[r]=a[i];
            r++;
        }
        if(a[i]<0)
        {
            c[t]=a[i];
            t++;
        }
    }
    int index;
    for(int i=0;i<r;i++)
    {
        cout<<b[i]<<"\n";
    }
    for(int i=0;i<t;i++)
    {
        cout<<c[i]<<"\n";
    }
    return 0;
}
