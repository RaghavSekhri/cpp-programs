#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v {20,33,44};
    /*vector<int>::iterator it;
    it=v.begin();
    while(it!=v.end())
    {
        cout<<*it<<"\n";
        it++;
    }
    cout<<"\n";
    v.erase(v.begin(),v.end()-2);
    it=v.begin();
    while(it!=v.end())
    {
        cout<<*it<<"\n";
        it++;
    }
    cout<<"\n";*/
    v.erase(v.begin());
    vector<int>::iterator it;
    it=v.begin();
    while(it!=v.end())
    {
        cout<<*it<<"\n";
        it++;
    }

    /*v.resize(2);
    vector<int>::iterator it;
    it=v.begin();
    while(it!=v.end())
    {
        cout<<*it<<"\n";
        it++;
    }*/

    /*vector<int> v (3,100);
    vector<int> v1 (5,200);
    v.swap(v1);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<"\n";
    cout<<"\n";
    for(int j=0;j<v1.size();j++)
        cout<<v1[j]<<"\n";*/


    return 0;
}
