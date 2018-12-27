#include <iostream>


using namespace std;

class A
{
public:
    void display()
    {
        cout<<"This function belongs to a"<<endl;
    }
};
class B : public A
{
public:
    void display()
    {
        cout<<"This function belongs to b"<<endl;
    }
};
int main()
{
    B obj;
    obj.display();
    return 0;
}
