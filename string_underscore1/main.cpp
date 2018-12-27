#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char str[200];
    gets(str);
    int i,j,count=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='_')
        {
            for(j=i;j>0;j--)
            {
                str[j]=str[j-1];
            }
            str[count]='_';
            count++;
        }
    }
    cout<<str;
    return 0;
}

