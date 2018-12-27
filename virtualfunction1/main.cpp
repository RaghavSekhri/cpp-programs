#include <iostream>

using namespace std;
class abc
{
public:
    virtual void show()
    {
        cout<<"Base"<<"\n";
    }
};
class derived:public abc
{
public:
    void show()
    {
        cout<<"Derived"<<"\n";
    }
};
int main()
{
    abc *p;
    abc ob;
    derived ob1;
    p=&ob;
    p->show();
    p=&ob1;
    p->show();
    return 0;
}
