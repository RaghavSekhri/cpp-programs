#include <iostream>

using namespace std;

class complex
{
    int a,b;
public:
    complex(int x)  /*  or write complex(int x):a(x),b(2x)  */
    {
        a=x;
        b=2*x;
    }
    complex(complex &ob)
    {
        a=ob.a;
        b=ob.b;
    }
    void put()
    {
        cout<<a<<endl<<b<<endl;
    }
};

int main()
{
    int x;
    cin>>x;
    complex c(x);
    complex c2=c; /* or write complex c1(c)  */
    c.put();
    c2.put();
    return 0;
}
