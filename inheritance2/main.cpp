#include <iostream>

using namespace std;

class base
{
    int num1;
public:
    void base_read()
    {
        cout<<"Enter num1 = ";
        cin>>num1;
    }
    void base_show()
    {
        cout<<"Num1 = "<<num1<<"\n";
    }
};

class derived:public base
{
    int num2;
public:
    void derived_read()
    {
        cout<<"Enter num2 = ";
        cin>>num2;
    }
    void derived_show()
    {
        cout<<"Num2 = "<<num2<<"\n";
    }
};

int main()
{
    base b1;
    derived d1;
    d1.base_read();
    d1.derived_read();
    d1.base_show();
    d1.derived_show();
    b1.base_read();
    b1.base_show();
    return 0;
}
