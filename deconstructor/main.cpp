#include <iostream>

using namespace std;
 class complex
 {
     public:
     ~complex()
     {
         cout<<"Deconstructor"<<endl;
     };
     void fun()
     {
         complex ob;
         ob.put();
     }
     void put()
     {
         cout<<"Hello"<<endl;
     }
 };
 int main()
 {
     complex ob;
     ob.fun();
     complex ob1;
     complex ob2;
    // ob1.put();
    // ob2.put();
 }
