#include <iostream>

 // multiple inheritence

using namespace std;

 class Base {

 public :

      void dis() {

       cout<<"this is from base class\n";
      }

 };

 class Derived {

  public :

       void disp() {

        cout<<"this is from dervied class\n";

       }

 };

 class Decendent : public Base , public Derived {

  public:

      void display() {

       cout<<"this is form decendent class\n ";

      }


 };


int main()
{
     Decendent obj ;

     obj.display();
     obj.disp();
     obj.dis();

    return 0;
}
