#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,l,m,o,p,n;
    int a[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
            if(j==n-1);
            {
                for(i=0;i<n;i++)
                {
                    printf("%d",a[i][j]);
                    if(i==n-1);
                    {
                        for(j=n-1;j>0;j--)
                        {
                            printf("%d",a[i][j]);
                            if(j==0)
                            {
                                for(i=n-1;i>0;i--)
                                {
                                    printf("%d",a[i][j]);
                                    n=n/2;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
