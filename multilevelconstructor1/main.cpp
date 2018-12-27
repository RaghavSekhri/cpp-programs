#include <iostream>

using namespace std;

class base
{
public:
    base()
    {
        cout<<"Inside base constructor"<<endl;
    }
    ~base()
    {
        cout<<"Inside base destructor"<<endl;
    }
};

class derived1:public base
{
public:
    derived1():base()
    {
        cout<<"Inside derived1 constructor"<<endl;
    }
    ~derived1()
    {
        cout<<"Inside derived1 destructor"<<endl;
    }
};

class derived2:public derived1
{
public:
    derived2():derived1()
    {
        cout<<"Inside derived2 constructor"<<endl;
    }
    ~derived2()
    {
        cout<<"Inside derived2 destructor"<<endl;
    }
};

int main()
{
    derived2 obj;
    return 0;
}
