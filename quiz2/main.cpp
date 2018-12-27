#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    string a[3]={"a","b","d"};
    string b[3],ans;
    string newstring[3];
    int i,j,r=0;
    string c[3]={"Q 1:- what is the value of 2+3?","Q 2:- what is the value of 2*3?","Q 3:- what is the value of 2-3?"};
    string d[3]={"a) 5","a) 9","a) 4"};
    string e[3]={"b) 6","b) 6","b) 9"};
    string f[3]={"c) 7","c) 4","c) 5"};
    string g[3]={"d) 8","d) 6","d) -1"};
    cout<<"-------------------------------------Welcome to the world's most difficult quiz----------------------------------------- "<<endl;
    while(true)
    {
    srand(time(0));
    string x=c[rand()%3+0];
    string y=c[rand()%3+0];
    string z=c[rand()%3+0];
    newstring[0]=x;
    if(y!=newstring[0])
    {
        newstring[1]=y;
        if(newstring[1]!=z&&newstring[0]!=z)
        {
            newstring[2]=z;
            break;
        }
    }
    }
   for(i=0;i<3;i++)
       cout<<newstring[i]<<endl;
    return 0;
}
