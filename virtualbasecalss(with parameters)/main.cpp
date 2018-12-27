#include <iostream>

using namespace std;
class A
{
    public:
    int a;
    A(int x):a(x)
    {

    }
    ~A()
    {
        cout<<a<<" "<<endl;
    }
};
class B:virtual public A
{
    public:
    int b;
    B(int x,int y):A(x),b(y)
    {

    }
    ~B()
    {
        cout<<a<<" "<<b<<" "<<endl;
    }
};
class C:virtual public A
{
    public:
    int c;
    C(int x,int z):A(x),c(z)
    {

    }
    ~C()
    {
        cout<<a<<" "<<c<<" "<<endl;
    }
};
class D:public B,public C
{
    public:
    int d;
    D(int x,int y,int z,int w):A(x),B(x,y),C(x,z),d(w)
    {

    }
    ~D()
    {
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<endl;
    }
};
int main()
{
    D ob(1,2,3,4);
    return 0;
}
