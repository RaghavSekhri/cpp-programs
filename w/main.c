#include <stdio.h>
int main()
{
    char *p;
    p="%d\n";
    p=p+2;
    printf("%c",*(p-2));
    return 0;
}
