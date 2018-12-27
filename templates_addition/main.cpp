#include <iostream>

using namespace std;

template<class T>

void add(T a,T b)
{
    T c;
    c=a+b;
    cout<<c<<"\n";
}

int main()
{
    string A,B;
    cin>>A>>B;
    add(A,B);
    //add(1.1,2.2);
    return 0;
}
