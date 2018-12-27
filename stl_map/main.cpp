#include <iostream>
#include<map>
using namespace std;
int main()
{
   map<string,vector<string>>map1;
   int n,i,j,a[10],b[10],r=0,d=0;
   string x,y;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>x>>y;
       auto it = map1.find(x);
       if(it!=map1.end())
       {
         (it->second).push_back(y);
       }
       else
        {
            vector<string> s;
            s.push_back(y);
            map1.insert(pair<string,vector<string>>(x,s));
        }
       map1.insert(pair<string,string>(x,y));
   }
   string category;
   map<string,string>::iterator it,it1;
   cout<<"The information is :- \n";
   cout<<"Enter the category you want to see : ";
   cin>>category;
   cout<<"\n";
   it=map1.find("fruit");
   it1=map1.find("vegetable");
   if(category=="fruit")
   {
    for(it=map1.begin();it!=map1.end();it++)
    cout<<it->first<<" "<<it->second<<"\n";
   }
   else
    if(category=="vegetable")
    {
        for(it1=map1.begin();it1!=map1.end();it1++)
        cout<<it1->first<<" "<<it1->second<<"\n";
    }
    return 0;
}
