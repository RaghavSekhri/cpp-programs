#include <iostream>
using namespace std;

int main()
{
   int *a=new int[5];//dynamically allocated the memory
   int i;
   for(i=0;i<5;i++)
       cin>>a[i];
   for(i=0;i<5;i++)
       cout<<a[i]<<"\n";
    return 0;
}
