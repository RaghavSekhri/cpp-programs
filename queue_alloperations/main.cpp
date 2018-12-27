#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q,q1;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.size()<<"\n";
    cout<<q.front()<<"\n";
    cout<<q.back()<<"\n";
    cout<<"\n";
    q1=q;

    while(!q1.empty())
    {
        cout<<q1.front()<<"\n";
        q1.pop();
    }
    return 0;
}
