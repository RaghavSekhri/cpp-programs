#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> s;
    for(int i=0;i<10;i++)
    {
        s.insert(10-i);
    }
    multiset<int>::iterator it1;
    it1=s.find(6);
    s.erase(it1);
    multiset<int>::iterator it=s.begin();
    while(it!=s.end())
    {
        cout<<*it<<"\n";
        it++;
    }
    cout<<"-*-*-*-*-*-\n";
    cout<<s.size()<<"\n";
    cout<<"-*-*-*-*-*-\n";
    s.insert(5);
    multiset<int>::iterator it2=s.begin();
    while(it2!=s.end())
    {
        cout<<*it2<<"\n";
        it2++;
    }
    cout<<"-*-*-*-*-*-\n";
    cout<<s.count(5)<<"\n";
    cout<<"-*-*-*-*-*-\n";
    cout<<s.empty()<<"\n";
    s.clear();
    cout<<s.empty()<<"\n";
    return 0;
}
