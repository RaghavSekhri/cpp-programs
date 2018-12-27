#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*bool isEven(int i)
{
    if(i%2==0)
        return 1;
    else
        return 0;
}*/
/*bool isOdd(int i)
{
    return i%2;
}*/
int main()
{
   /*vector<int> v {33,33,44,55};
   vector<int>::iterator it;
   it=v.begin();
    vector<int>::iterator it1;
    it1=v.end();
    int z;
    cout<<count(v.begin(),v.end()-2,33);*/

    /*vector<int> v{33,33,44,55};
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    int no_even=count_if(v.begin(),v.end(),isEven);
    cout<<no_even;*/

    /*vector<int> v {33,33,44,55,66,77,88,99};
    vector<int>::iterator it;
    it=find(v.begin(),v.end(),44);
    if(*it==44)
    {
        cout<<"found"<<"\n";
        cout<<"Position : "<<distance(v.begin(),it)<<"\n";
    }
    else
        cout<<"not found"<<"\n";
    vector<int>::iterator it1;
    it1=find_if(v.begin(),v.end(),isOdd);
    cout<<"The first odd value is : "<<*it1<<"\n";
    vector<int>::iterator it2;
    it2=find_if_not(v.begin(),v.end(),isOdd);
    cout<<"The first even value is : "<<*it2<<"\n"*/

    /*vector<int> v{33,44,55};
    vector<int> v1(3);
    copy(v.begin(),v.end(),v1.begin());
    vector<int>::iterator it;
    it=v1.begin();
    while(it!=v1.end())
    {
        cout<<*it<<"\n";
        it++;
    }*/

    /*vector<int> v(8);
    fill(v.begin(),v.end(),8);
    fill(v.begin()+3,v.end()-2,4);
    vector<int>::iterator it;
    it=v.begin();
    while(it!=v.end())
    {
        cout<<*it<<"\n";
        it++;
    }*/

    /*vector<int> v {20,55,66,20,99,88,20};
    vector<int>::iterator pend;
    pend=remove(v.begin(),v.end(),20);
    for(vector<int>::iterator p=v.begin();p!=pend;p++)
    {
        cout<<*p<<"\n";
    }*/

    /*vector<int> v {20,55,66,20,99,88,20};
    vector<int> v1(7);
    vector<int>::iterator pend;
    pend=remove_copy(v.begin(),v.end(),v1.begin(),20);
    vector<int>::iterator it;
    it=v1.begin();
    while(it!=pend)
    {
        cout<<*it<<"\n";
        it++;
    }*/

    /*vector<int> v{22,33,44,55,22,33,22,77};
    replace(v.begin(),v.end(),22,99);
    vector<int>::iterator it;
    it=v.begin();
    while(it!=v.end())
    {
        cout<<*it<<"\n";
        it++;
    }*/

    /*vector<int> v{22,33,44,55,22,33,22,77};
    vector<int> v1(8);
    replace_copy(v.begin(),v.end(),v1.begin(),22,99);
    vector<int>::iterator it;
    it=v1.begin();
    while(it!=v1.end())
    {
        cout<<*it<<"\n";
        it++;
    }*/

    /*vector<int> v;
    for(int i=0;i<10;i++)
        v.push_back(i);
    reverse(v.begin(),v.end());
    vector<int>::iterator it;
    it=v.begin();
    while(it!=v.end())
    {
        cout<<*it<<"\n";
        it++;
    }*/

    /*vector<int> v;
    for(int i=0;i<10;i++)
        v.push_back(i);
    vector<int> v1(10);
    reverse_copy(v.begin(),v.end(),v1.begin());
    vector<int>::iterator it;
    it=v1.begin();
    while(it!=v1.end())
    {
        cout<<*it<<"\n";
        it++;
    }*/

    /*vector<int> v { 1, 1, 3, 3, 3, 10, 1, 3, 3, 7, 7, 8 };
    vector<int>::iterator ip;
    ip = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), ip));
    for (ip = v.begin(); ip != v.end(); ++ip)
    {
        cout << *ip << " ";
    }*/

    vector<int> v = { 10, 10, 30, 30, 30, 100, 10, 300, 300, 70, 70, 80 };
    vector<int> v1(10);
    vector<int> v2(10);
    vector<int>::iterator ip;
    ip = unique_copy(v.begin(), v.end(), v1.begin());
    v1.resize(distance(v1.begin(), ip));
    sort(v1.begin(),ip);
    vector<int>::iterator ip1;
    ip1 = unique_copy(v1.begin(), v1.end(), v2.begin());
    v2.resize(distance(v2.begin(),ip1));
    for (ip1 = v2.begin(); ip1 != v2.end(); ++ip1)
    {
        cout << *ip1 << " ";
    }

    //cout<<max(1,2);

    /*vector<int> v {11,22,33,44,55,44,33,22,11};
    vector<int>::iterator it;
    it=max_element(v.begin(),v.end());
    cout<<*it;*/

    //cout<<min(1,2);

    /*vector<int> v {11,22,33,44,55,44,33,22,11};
    vector<int>::iterator it;
    it=min_element(v.begin(),v.end());
    cout<<*it;*/
    return 0;
}
