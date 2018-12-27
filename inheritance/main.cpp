#include <iostream>

using namespace std;

class A
{
public:
    int a=10;
    void display()
    {
        cout<<a<<"\n";
        cout<<b<<"\n";
        cout<<c<<"\n";
    }
private:
    int b=20;
protected:
    int c=30;
};
class B : public A
{

};
int main()
{
    B obj;
    obj.display();
    return 0;
}
