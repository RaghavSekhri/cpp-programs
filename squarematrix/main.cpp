#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    int a[100][100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    i=0;
    for(j=0;j<n;j++)
    {
        cout<<a[i][j];
    }
    j=n-1;
    for(i=1;i<n;i++)
    {
        cout<<a[i][j];
    }
    i=n-1;
    for(j=n-2;j>=0;j--)
    {
        cout<<a[i][j];
    }
    j=0;
    for(i=n-2;i>0;i--)
    {
        cout<<a[i][j];
    }
    return 0;
}
