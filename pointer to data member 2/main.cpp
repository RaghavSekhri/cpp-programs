#include <iostream>

using namespace std;

class abc
{
public:
    int a,b;
    abc(int x,int y)
    {
        a=x;
        b=y;
    }
   // void print()
    //{
     //   cout<<a<<"\n"<<b<<endl;
    //}
};

int main()
{
    //int abc::*pa=&abc::a;
    abc ob(2,3);
    //abc *pob;
    //pob=&ob;
    cout<<ob.a<<endl;
    //cout<<pob->a<<endl;
    //cout<<ob.*pa<<endl;
    //cout<<pob->*pa<<endl;
    return 0;
}
