#include <iostream>

using namespace std;
template <class T1,class T2>
void print(T1 a,T2 b)
{
    cout<<a<<" "<<b<<"\n";
}
int main()
{
    print(4,1.1);
    print(6,'a');
    return 0;
}
