#include <iostream>

using namespace std;

template <class T>
class abc
{
    T a,b;
    public:
    abc()
    {
        cin>>a>>b;
    }
    void print()
    {
        cout<<a<<" "<<b<<"\n";
    }
};
int main()
{
    abc<int>ob;
    abc<float>ob1;
    ob.print();
    ob1.print();
    return 0;
}
