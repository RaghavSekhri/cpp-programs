#include <iostream>

using namespace std;
class abc
{
public:
    virtual void a()
    {
        cout<<"a abc"<<"\n";
    }
    virtual void c()
    {

        cout<<"c abc"<<"\n";
    }
};
class derived:public abc
{
public:
    virtual void b()
    {

        cout<<"b derived"<<"\n";
    }
    virtual void c()
    {
        cout<<"c derived"<<"\n";
    }
};
int main()
{
    abc *p=new derived;
    p->a();
    p->c();
    ((derived*)p)->b();
    return 0;
}
