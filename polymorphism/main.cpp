#include <iostream>

using namespace std;
class a
{
public:
   virtual void show()
    {
        cout<<"hello";
    }
};
class b:public a
{
public:
    virtual void show()
    {
        cout<<"bye";
    }
};
int main()
{
   b ob;
   ob.show();
    return 0;
}
