#include <iostream>

using namespace std;

int swap(int *a,int *b)
{
 int t;
 t=*a;
 *a=*b;
 *b=t;
 cout<<*a<<endl<<*b<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<endl<<b<<endl;
    return 0;
}
