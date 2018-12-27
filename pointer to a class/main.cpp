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
    abc ob(4,5);
    abc *ptr;
    ptr=&ob;
    ob.print();
    ptr->print();
    return 0;
}
