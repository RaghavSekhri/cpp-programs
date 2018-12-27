#include<iostream>
using namespace std;
//return by refernce
int& fun()
   {
       int n;
       n=n+1;
       return n;
   }
int main()
{
    fun()=10;
    cout<<fun();
    return 0;
}
