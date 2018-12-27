#include <iostream>

using namespace std;

class base
{
public:
    int a;
    base(int x)
    {
        a=x;
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
    int b;
    derived1(int x,int y):base(x)
    {
        b=y;
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
    int c;
    derived2(int x,int y,int z):derived1(x,y)
    {
        c=z;
        cout<<"Inside derived2 constructor"<<endl;
    }
    ~derived2()
    {
        cout<<"Inside derived2 destructor"<<endl;
    }
    void show()
    {
        cout<<" a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
    }
};

int main()
{
    derived2 obj(2,3,4);
    obj.show();
    return 0;
}
