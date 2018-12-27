#include <iostream>

using namespace std;

inline int max(int a)
{
 return a;
}
int main()
{
    int x=3;
    cout<<max(++x);
    return 0;
}
