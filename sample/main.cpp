#include<iostream>
#include<cstdio>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
  float n;
  cin>>n;
float i,a,b,c;
float compound;
  for(i=0;i<n;i++)
  {
    cin>>a>>b>>c;
    compound=(float)a*pow((1+b*0.01),c);
    cout<<fixed;
    cout.precision(1);
    cout<<compound<<endl;
  }
    return 0;
}
