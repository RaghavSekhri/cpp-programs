#include <iostream>

using namespace std;
class hello
{
    public:
int add(int x,int y)
{
    return x+y;
}
};
int main()
{
    hello ob;
    int (*point)(int,int)=hello::add;
    cout<<ob.hello::add(5,6);
    return 0;
}
