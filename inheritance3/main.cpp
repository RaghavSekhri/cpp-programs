#include <iostream>

using namespace std;

class base
{
    int priv_base;
protected:
    int prot_base;
public:
    int get_base_priv()
    {
        priv_base=10;
        return priv_base;
    }
};

class derive:public base
{
    int priv_der;
protected:
    int prot_der;
public:
    void f1()
    {
        int x;
        x=get_base_priv();
        cout<<"Value of base's private data = "<<x;
        prot_base=20;
        cout<<"\nValue of base's protected data = "<<prot_base;
    }
};

int main()
{
    derive d;
    int y;
    d.f1();
    y=d.get_base_priv();
    cout<<"\nValue of base private data accesssed indirectly = "<<y;
    return 0;
}
