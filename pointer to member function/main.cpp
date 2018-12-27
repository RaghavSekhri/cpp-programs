#include <iostream>

using namespace std;

class abc
{
    int a,b;
public:
    abc(int x,int y)
    {
        a=x;
        b=y;
    }
    void print()
    {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    int abc::*pa=&abc::a;
    abc ob(2,3);
    abc *pob;
    pob=&a;
    void (abc::*point)()=&sbc::print;
    cout<<ob.a<<endl;
    cout<<pob->a;
    cout<<ob.*pa;
    cout<<pob->*pa;
    ob.print();
    pob->print();
    (ob.*point)();
    (pob->*point)();
    return 0;
}
