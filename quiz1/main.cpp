#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;




int main()
{
  int numbers[3] = {1,25,3};

  int newnum[3] ;

    while(true) {
         srand(time(0));
         int a =  numbers[rand()%3+0];
         int b =  numbers[rand()%3+0];
         int c =  numbers[rand()%3+0];

         newnum[0] = a;

         if(b!=newnum[0])
         {
             newnum[1] = b;

             if(newnum[1]!=c&&newnum[0]!=c) {

                newnum[2] =c ;
                break;

             }


         }



    }

    int i;

       for(i=0; i<3; i++) {

        cout<<newnum[i]<<endl;

       }




    return 0;
}
