#include <iostream>
#include<fstream>
using namespace std;


 class input{


 public:

     void run();


 } ;

void input::run(){


        fstream datafile;
        datafile.open("some.txt" , ios::out);

        datafile<<"monty";
        datafile<<"shanty";

        datafile.close();

        datafile.open("some.txt" , ios::in);

         char data[200];
         int i;
        for(i=0;i<2;i++){

               datafile>>data;
            cout<<data<<endl;

        }
}



int main()

{

    input obj;
    obj.run();



    return 0;
}
