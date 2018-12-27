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
        cout<<a<<b<<endl;
    }
};

int main()
{
    abc ob(2,3);
    abc *pob;
    pob=&ob;
    ob.print();
    pob->print();
    return 0;
}
