#include <iostream>

using namespace std;
class A
{
    public:
    void sum(int x,int y)
    {
        cout<<x+y;
    }
    void sum(int x,int y,int z)
    {
        cout<<x+y+z;
    }
    void sum(int x,int y,int z,int k)
    {
        cout<<x+y+z+k;
    }
};
int main()
{
    A obj;
    obj.sum(/*insert any value here*/7,8);
    return 0;
}
