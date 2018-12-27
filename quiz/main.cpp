#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    string a[3]={"a","b","d"};
    string b[3],ans;
    int i,j,r=0;
    string c[3]={"Q 1:- what is the value of 2+3?","Q 2:- what is the value of 2*3?","Q 3:- what is the value of 2-3?"};
    string d[3]={"a) 5","a) 9","a) 4"};
    string e[3]={"b) 6","b) 6","b) 9"};
    string f[3]={"c) 7","c) 4","c) 5"};
    string g[3]={"d) 8","d) 6","d) -1"};
    cout<<"-------------------------------------Welcome to the world's most difficult quiz----------------------------------------- "<<endl;
    for(i=0;i<3;i++)
    {
      cout<<c[i]<<endl;
      cout<<d[i]<<endl;
      cout<<e[i]<<endl;
      cout<<f[i]<<endl;
      cout<<g[i]<<endl;
      cout<<"Enter your answer : ";
      cin>>ans;
      b[r]=ans;
      r++;
    }
    cout<<endl;
    cout<<"--------------------------------------------And the correct answers are :-----------------------------------------------"<<endl;
    cout<<endl;
      for(j=0;j<r;j++)
      {
          if(a[j]==b[j])
          {
              cout<<"Your "<<j+1<<" answer is right "<<endl;
              cout<<endl;
          }
          else
          {
              cout<<"Your "<<j+1<<" answer is not correct "<<endl;
              cout<<"The right answer is "<<a[j]<<endl;
              cout<<endl;
          }
      }
    return 0;
}
