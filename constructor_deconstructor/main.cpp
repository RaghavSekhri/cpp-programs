#include <iostream>

using namespace std;
class A
{
public:
    A()
    {
        cout<<"This is class a constructor"<<endl;
    }
    ~A()
    {
        cout<<"This is class a deconstructor"<<endl;
    }
};
class B
{
public:
    B()
    {
        cout<<"This is class b constructor"<<endl;
    }
    ~B()
    {
        cout<<"This is class b deconstructoir"<<endl;
    }
};
class C : public B , public A
{
public:
    C()
    {
        cout<<"This is class c constructor"<<endl;
    }
    ~C()
    {
        cout<<"This is class c deconstructor"<<endl;
    }
};
int main()
{
    C obj;
    return 0;
}
