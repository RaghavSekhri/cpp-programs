#include <iostream>

using namespace std;

class dynamic
{
  int *p;
  public:
      dynamic()
      {
          p=new int;
          *p=5;
      }
      dynamic(int x)
      {
          p=new int;
          *p=x;
      }
      dynamic(dynamic &ob)
      {
          p=new int;
          *p=ob.value();
      }
      ~dynamic()
      {
          delete p;
          cout<<"ending"<<endl;
      }
      int value()
      {
          return *p;
      }
};

int main()
{
    dynamic ob;
    dynamic ob1(5);
    dynamic ob2(ob1);
    cout<<ob.value()<<endl;
    cout<<ob1.value()<<endl;
    cout<<ob2.value()<<endl;
    return 0;
}
