#include <iostream>

using namespace std;

class fibbo
{
    public:
    fibbo()
    {
       int a=0,b=1,c=0,sum=0;
       cout<<a<<" ";
       cout<<b<<" ";
       while(c<4000000)
       {
           c=a+b;
           if(c%2==0)
            {
               sum=sum+c;
            }
           a=b;
           b=c;
       }
       cout<<"Sum of even numbers is "<<sum;
    }
};
int main()
{
    fibbo obj;
    return 0;
}
