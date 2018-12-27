#include <iostream>

using namespace std;

class swap1
{
public:
    int a,b;
    void getdata()
    {
        cin>>a>>b;
    }
    void swap2()
    {
        int t;
        t=a;
        a=b;
        b=t;
        cout<<a<<"\n"<<b;
    }
};

int main()
{
    swap1 obj;
    obj.getdata();
    obj.swap2();
    return 0;
}
