#include <iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> dq{22,33,44};
    deque<int>::iterator it=dq.begin();
    while(it!=dq.end())
    {
        cout<<*it<<"\n";
        it++;
    }
    cout<<"-*-*-*-*-*-\n";
    dq.push_back(55);
    dq.push_front(11);
    deque<int>::iterator it1=dq.begin();
    while(it1!=dq.end())
    {
        cout<<*it1<<"\n";
        it1++;
    }
    cout<<"-*-*-*-*-*-\n";
    dq.pop_back();
    dq.pop_front();
    deque<int>::iterator it2=dq.begin();
    while(it2!=dq.end())
    {
        cout<<*it2<<"\n";
        it2++;
    }
    cout<<"-*-*-*-*-*-\n";
    cout<<dq.size()<<"\n";
    cout<<"-*-*-*-*-*-\n";
    dq.front()=dq.front()-dq.back();
    cout<<"The difference between first and last element is : "<<dq.front()<<"\n";
    cout<<"-*-*-*-*-*-\n";
    cout<<dq.empty()<<"\n";
    dq.clear();
    cout<<dq.empty()<<"\n";
    return 0;
}
