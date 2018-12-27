#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
class array
{
public:
    int random,i;
    int a[5]={1,2,3,4,5};
    void shuffle()
    {
        srand(time(0));
        random=rand()%5;

         for(i=0;i<5;i++) {

             a[i] = a[random];




        for(i=0;i<5;i++){

             cout<<random<<endl;
        }
         }
    }
};
int main()
{

    array obj;

    obj.shuffle();

    return 0;
}
