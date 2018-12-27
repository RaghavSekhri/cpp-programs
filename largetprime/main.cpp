#include <iostream>

using namespace std;

int main()
{
    double x=600851475143;
    int a[100],b[100],d=0,r=0,count=0;
    int i,j;
    int max;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            a[r]=i;
            r++;
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=2;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                count++;
            }
        }
        if(count==1)
        {
            b[d]=i;
            d++;
        }
        count=0;
    }
    max=b[0];
        for(j=1;j<d;j++)
        {
            if(a[j]>max)
            {
                max=a[j];
            }
        }
        cout<<max;
    return 0;
}
