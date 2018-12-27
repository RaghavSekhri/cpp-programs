#include <iostream>

using namespace std;

class A
{
public:
    A(int x)
    {
        cout<<"Constructor = "<<x;
    }
};
int main()
{
    int x;
    cin>>x;
    A obj(x);
    return 0;
}
