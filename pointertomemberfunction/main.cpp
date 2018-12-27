#include <iostream>

using namespace std;

class abc
{
public:
    int a,b;
    abc(int x,int y)
    {
        a=x;
        b=y;
    }
    void print()
    {
        cout<<a<<b<<endl;
    }
};

int main()
{
    int abc::*pa=&abc::a;
    abc ob(2,3);
    abc *pob;
    pob=&ob;
    void (abc::*point)()=&abc::print;
    cout<<ob.a;
    cout<<pob->a;
    cout<<ob.*pa;
    cout<<pob->*pa;
    ob.print();
    pob->print();
    (ob.*point)();
    (pob->*point)();
    return 0;
}
