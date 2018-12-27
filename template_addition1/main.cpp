#include <iostream>

using namespace std;

template<class T>

T add(T a,T b)
{
    T c;
    c=a+b;
    return c;
}

int main()
{
    cout<<add(2,3)<<"\n";
    cout<<add(1.1,2.2)<<"\n";
    return 0;
}
