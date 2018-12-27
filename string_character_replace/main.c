#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[200];
    char a,b;
    int i,q,w;
    gets(str);
    scanf(" %c",&a);
    scanf(" %c",&b);
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
    printf("%s",str);
    return 0;
}
