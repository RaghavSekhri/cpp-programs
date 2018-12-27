#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int>v1{10,20};
  vector<char>v2(4,'a');
  cout<<v1.capacity()<<"\n";
  cout<<"-*-*-*-*-"<<"\n";
  v1.insert(v1.begin()+3,5);
  for(int i=0;i<2;i++)
    cout<<v1[i]<<"\n";
  cout<<"-*-*-*-*-"<<"\n";
  for(int j=0;j<4;j++)
    cout<<v2[j]<<"\n";
  cout<<"-*-*-*-*-"<<"\n";
  cout<<v1.at(1)<<"\n";
  cout<<"-*-*-*-*-"<<"\n";
  v1.push_back(30);
  for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<"\n";
  cout<<"-*-*-*-*-"<<"\n";
  cout<<v1.front()<<"\n";
  cout<<v1.back()<<"\n";
  cout<<"-*-*-*-*-"<<"\n";
  v1.pop_back();
  v1.pop_back();
  for (auto it = v1.begin(); it != v1.end(); ++it)
    cout<<*it<<"\n";
  cout<<"-*-*-*-*-"<<"\n";                                  //pop_back() function isn't working directly,it is working when using iterators.
  cout<<v1.size()<<"\n";
  cout<<"-*-*-*-*-"<<"\n";
  v1.clear();
  for (auto it = v1.begin(); it != v1.end(); ++it)
    cout<<*it<<"\n";
  cout<<v1.size()<<"\n";
  cout<<"-*-*-*-*-"<<"\n";
  vector<int>::iterator it=v1.begin();
  v1.insert(it,3);   //or v1.insert(v1.begin()+any index you want , value)
  for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<"\n";
  cout<<"-*-*-*-*-"<<"\n";
  cout<<v1.empty()<<"\n";
  v1.clear();
  cout<<v1.empty()<<"\n";
  cout<<"-*-*-*-*-"<<"\n";
  v1.push_back(5);
  v1.push_back(10);
  for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<"\n";
    return 0;

}
