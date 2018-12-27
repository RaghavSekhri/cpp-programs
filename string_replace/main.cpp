#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char str[200];
    char a,b;
    int i,q,w;
    gets(str);
    cin>>a>>b;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==a)
        {
           str[i]=b;
        }
        else
        if(str[i]==b)
        {
            str[i]=a;
        }
    }
    cout<<str;
    return 0;
}
