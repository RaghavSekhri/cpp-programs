#include <iostream>

using namespace std;

int main()
{
    int i;
    for(i=1900;i<2025;i++)
    {
       if(i%4==0||i%400==0)
       {
           if(i==2016)
            continue;
            cout<<i<<"\n";
       }
    }
    return 0;
}
