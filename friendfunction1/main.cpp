#include <iostream>

using namespace std;

class integer;
class complex
{
    int a,b;
public:
    void get()
    {
        cin>>a>>b;
    }
    void display()
    {
        cout<<a<<"+i"<<b;
    }
    void addition(integer in);
};
class integer
{
    int n;
public:
    void get()
    {
        cin>>n;
    }
    void dispaly()
    {
        cout<<n;
    }
    friend void complex::addition(integer in);
};

void complex::addition(integer in)
{
    a=a+in.n;
    b=b+in.n;
}
int main()
{
    complex ob;
    integer ob1;
    ob.get();
    ob1.get();
    ob.addition(ob1);
    ob.display();
    return 0;
}
