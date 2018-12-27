#include <iostream>
#include <fstream>
using namespace std;

 class FileHandling{

public:

    void run();





 };


 void FileHandling::run(){
 fstream datafile;


    datafile.open("raghav.txt" , ios::out);



     cout<<"File is created";

     datafile<<"im writing this for testing file \n";
    datafile<<"some text";



    }





int main()
{

     FileHandling obj;
     obj.run();

    return 0;
}
