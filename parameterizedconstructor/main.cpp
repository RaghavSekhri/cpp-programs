#include <iostream>

using namespace std;

class complex
{
    int a,b;
public:
    complex(int x,int y)  /* or writ complex(int x , int y):a(x),b(y)  */
    {
        a=x;
        b=y;
    }
    void put()
    {
        cout<<a<<endl<<b<<endl;
    }
};

int main()
{
    int a,b;
    cin>>a>>b;
    complex c(a,b);
    c.put();
    return 0;
}
