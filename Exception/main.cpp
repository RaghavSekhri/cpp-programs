#include <iostream>

using namespace std;

// Exception handling in c++



 class Excep{

  public:

      void errorDetection(){

       int i ;

        cout<<"Enter a number above 0 : ";



        try{

         cin>>i;
          if(i<0) {

             throw 1;

          }

          cout<<"Cool everytehing is fine";

        }catch(int x) {

          cout<<"sorry you enter below 0 input";

        }



      }



 };

int main()
{

    Excep obj;
    obj.errorDetection();
    return 0;
}
