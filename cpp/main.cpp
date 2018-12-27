//program for inline functions to find the maximum of two numbers
#include <iostream>

using namespace std;

inline int max(int x,int y)
{
    return (x>y?x:y);
}

int main()
{
   int a;
   a=max(6,8);
   cout<<"Greatest of 6 and 8 is : "<<a;
    return 0;
}
