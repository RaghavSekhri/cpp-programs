#include <iostream>

using namespace std;
class base
{
    int rollno;
public:
    void getdata()
    {
        cin>>rollno;
    }
    void showdata()
    {
        cout<<rollno;
    }
};
class derived:public base
{
  /*public:
      von9kid get()
      {
          getdata();
      }
      void show()
      {
          showdata();
      }*/
};
int main()
{
    derived d;
    d.getdata();
    d.showdata();
    return 0;
}
