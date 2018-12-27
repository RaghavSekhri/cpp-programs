#include <iostream>
//this is call by value
using namespace std;

class swapvar
{
    int a;
public:
    void get()
    {
        cin>>a;
    }
    void swap1(swapvar o,swapvar o1)
    {
        int t;
        t=o.a;
        o.a=o1.a;
        o1.a=t;
        cout<<o.a<<" "<<o1.a<<endl;
    }
    void display()
    {
        cout<<a<<" ";
    }
};

int main()
{
    swapvar ob,ob1,ob2;
    ob.get();
    ob1.get();
    ob2.swap1(ob,ob1);
    ob.display();
    ob1.display();
    return 0;
}
