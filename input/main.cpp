#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;


 class InputReading{

 public:

     void getinput();


 };

 void InputReading::getinput(){

      fstream input;
      char data[200];

       int lines;

      char  filenameinput[200];

        cout<<"Enter a name to create a file ";

         cin>>filenameinput;

       input.open( filenameinput, ios::out);


       cout<<"File is created :"<<filenameinput<<endl;

       cout<<"how many character you want to write";
       cin>>lines;

       int i ;

         string newgen;
          string datawrite;
         string space = " ";
        for(i=0;i<lines;i++) {


            cout<<"Enter line "<<i<<":";

             cin>>datawrite;


             newgen = datawrite+space;

             if(datawrite=="xx"){

                break;
             }

            input<<newgen;

        }



 }


int main()
{
     InputReading obj;
     obj.getinput();

    return 0;
}
