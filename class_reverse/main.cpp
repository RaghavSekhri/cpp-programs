#include <iostream>

using namespace std;

class reverse
{
    public:
    int a;
    void getdata();
    void reverse1();
};

void reverse::getdata()
{
    cin>>a;
}

void reverse::reverse1()
{
    int r,rev=0;
    while(a!=0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    cout<<rev;
}

int main()
{
    reverse obj;
    obj.getdata();
    obj.reverse1();
    return 0;
}
