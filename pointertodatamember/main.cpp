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
    abc *pob=new abc(2,3);
    pob->print();
    return 0;
}
