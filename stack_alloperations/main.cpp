#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s,s1;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.size()<<"\n";
    cout<<s.top()<<"\n";
    s1=s;
    cout<<"\n";
    while(!s1.empty())
    {
        cout<<s1.top()<<"\n";
        s1.pop();
    }
    return 0;
}
