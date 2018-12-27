#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> p;
    p.push(10);
    p.push(30);
    p.push(30);
    p.push(110);
    p.push(100);
    cout<<p.top()<<"\n";
    p.pop();
    cout<<p.top()<<"\n";
    cout<<"\n";
    while(!p.empty())
    {
        cout<<p.top()<<"\n";
        p.pop();
    }
    return 0;
}
