#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int,string> customer;
    customer.insert(pair<int,string>(205,"Raghav"));
    customer.insert(pair<int,string>(206,"Sekhri"));
    customer.insert(pair<int,string>(205,"Ridhav"));
    map<int,string>::iterator it=customer.begin();
    while(it!=customer.end())
    {
        cout<<it->first<<" "<<it->second<<"\n";
        it++;
    }
    cout<<"-*-*-*-*-*-*-\n";
    customer.erase(205);
    it = customer.begin();
    while(it!=customer.end())
    {
        cout<<it->first<<" "<<it->second<<"\n";
        it++;
    }
    cout<<"-*-*-*-*-*-*-\n";
    cout<<customer.size()<<"\n";
    cout<<"-*-*-*-*-*-*-\n";
    if(customer.count(206)>0)
        cout<<"yes"<<"\n";
    else
        cout<<"no"<<"\n";
    cout<<"-*-*-*-*-*-*-\n";
    cout<<customer.empty()<<"\n";
    customer.clear();
    cout<<customer.empty()<<"\n";
    return 0;
}
