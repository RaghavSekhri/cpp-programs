#include <iostream>

using namespace std;
class A
{
    public:
    void abc()
    {
        cout<<"hello";
    }
};
class B:virtual public A
{

};
class C:virtual public A
{

};
class D:public B,public C
{

};
int main()
{
    D ob;
    ob.abc();
    return 0;
}
