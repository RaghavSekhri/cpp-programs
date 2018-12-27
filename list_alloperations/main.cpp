#include <iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l1{55,22,77,44,66,99,88,11};
    list<string> l2{"hello","hi","are","you"};
    list<int>::iterator it=l1.begin();
    while(it!=l1.end())
    {
        cout<<*it<<"\n";
        it++;
    }
    //we can't access list variables directly.
    cout<<"-*-*-*-*-*-"<<"\n";
    cout<<l1.size()<<"\n";
    cout<<"-*-*-*-*-*-"<<"\n";
    l1.push_front(5);
    l1.push_back(110);
    list<int>::iterator it1=l1.begin();
    while(it1!=l1.end())
    {
        cout<<*it1<<"\n";
        it1++;
    }
    cout<<"-*-*-*-*-*-"<<"\n";
    l1.pop_front();
    l1.pop_back();
    list<int>::iterator it2=l1.begin();
    while(it2!=l1.end())
    {
        cout<<*it2<<"\n";
        it2++;
    }
    cout<<"-*-*-*-*-*-"<<"\n";
    l1.sort();
    list<int>::iterator it3=l1.begin();
    while(it3!=l1.end())
    {
        cout<<*it3<<"\n";
        it3++;
    }
    cout<<"-*-*-*-*-*-"<<"\n";
    l1.reverse();
    list<int>::iterator it4=l1.begin();
    while(it4!=l1.end())
    {
        cout<<*it4<<"\n";
        it4++;
    }
    cout<<"-*-*-*-*-*-"<<"\n";
    l1.remove(55);
    list<int>::iterator it5=l1.begin();
    while(it5!=l1.end())
    {
        cout<<*it5<<"\n";
        it5++;
    }
    cout<<"-*-*-*-*-*-"<<"\n";
    cout<<l1.empty()<<"\n";
    cout<<"-*-*-*-*-*-"<<"\n";
    l1.front()=l1.front()-l1.back();
    cout<<"The difference between first and last element is : "<<l1.front()<<"\n";
    cout<<l1.front()<<"\n";
    cout<<l1.back()<<"\n";
    cout<<"-*-*-*-*-*-"<<"\n";
    l1.clear();
    list<int>::iterator it6=l1.begin();
    while(it6!=l1.end())
    {
        cout<<*it6<<"\n";
        it6++;
    }
    cout<<"\n-*-*-*-*-*-"<<"\n";
    cout<<l1.empty()<<"\n";
    return 0;
    list<int>::iterator it6;
    it6=l1.begin();
    advance(l1,3);
    l1.insert(it,6);
}
