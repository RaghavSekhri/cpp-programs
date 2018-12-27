#include <iostream>

using namespace std;

class complex
{
    int a,b;
public:
    complex()  /* or write complex():a(2),b(3) */
    {
        a=2;
        b=3;
    }
    void put()
    {
        cout<<a<<endl<<b<<endl;
    }
};

int main()
{
    complex c,c1;
    c.put();
    c1.put();
    return 0;
}
