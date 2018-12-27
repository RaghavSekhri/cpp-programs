#include <iostream>

using namespace std;

int main()
{
    int n,a[100][100],k=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int num;
    if(n%2==0)
    {
        num=n/2;
    }
    else
    {
        num=(n+1)/2;
    }
    for(int loop=0;loop<num;loop++)
    {
        for(int j=k;j<n;j++)
        {
            cout<<a[k][j];
        }
        for(int i=k+1;i<n;i++)
        {
            cout<<a[i][n-1];
        }
        for(int j=n-2;j>=k;j--)
        {
            cout<<a[n-1][j];
        }
        for(int i=n-2;i>k;i--)
        {
            cout<<a[i][k];
        }
        k++;
        n--;
    }
    return 0;
}
