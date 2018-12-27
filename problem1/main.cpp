#include <iostream>

using namespace std;

class problem
{

public:

    problem(){

     int i,sum=0;
    for(i=1;i<1000;i++)
    {
        if(i%3==0||i%5==0)
        {
            sum=sum+i;
        }
    }
    cout<<"Sum is : "<<sum;


    }

};
int main(){


     problem obj;

    return 0;
}
