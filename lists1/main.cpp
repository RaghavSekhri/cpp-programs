#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
bool singledigit(int i)
{
  return i<10;
}
/*bool isodd(int j)
{
    return (j%2==1s);
}*/
int main()
{
    /*list<int> l {15,36,7,17,20,39,4,1};
    l.remove_if(singledigit);
    l.remove_if(isodd);
    list<int>::iterator it;
    it=l.begin();
    while(it!=l.end())
    {
        cout<<*it<<"\n";
        it++;
    }*/
     /*list<int> l {10,20};
     list<int> l1 {30,40};
     l1.merge(l);
     list<int>::iterator it;
     it=l1.begin();
     while(it!=l1.end())
     {
         cout<<*it<<"\n";
         it++;
     }*/
     list<int> l {22,22,33,44,44,55,66};
     list<int>::iterator it;
     it=unique(l.begin(),l.end());
     l.resize(distance(l.begin(),it));
     it=l.begin();
     while(it!=l.end())
     {
         cout<<*it<<"\n";
         it++;
     }
    return 0;
}
