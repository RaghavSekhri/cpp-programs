#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int,string> customer;
    customer[145]="Aditya";
    customer[171]="Shahid";
    customer[200]="Rajesh";
    customer[100]="Gajendra";
    customer[123]="Dilip";
    /*
    or
    map<int,string> c{ {100,"Gajendra"},{123,"Dilip"},{145,"Aditya"},{171,"Shahid"},{200,"Rajesh} };
    */
    int n,x;
    cin>>n;
    string y;
    for(int i=0;i<n;i++)
    {
     cin>>x;
     cin>>y;
     customer[x]=y;
    }
    cout<<customer[100]<<"\n";
    cout<<"-*-*-*-*-*-*-\n";
    map<int,string>::iterator it=customer.begin();
    while(it!=customer.end())
    {
        cout<<it->first<<" "<<it->second<<"\n";
        it++;
    }
    cout<<"-*-*-*-*-*-*-\n";
    cout<<customer.at(171)<<"\n";
    cout<<"-*-*-*-*-*-*-\n";
    cout<<customer.size()<<"\n";
    cout<<"-*-*-*-*-*-*-\n";
    cout<<customer.empty()<<"\n";
    cout<<"-*-*-*-*-*-*-\n";
    if(customer.count(171)>0)
        cout<<"yes"<<"\n";
    else
        cout<<"no"<<"\n";
    customer.erase(171);
    if(customer.count(171)>0)
        cout<<"yes"<<"\n";
    else
        cout<<"no"<<"\n";
    cout<<"-*-*-*-*-*-*-\n";
    customer.insert(pair<int,string>(205,"Raghav"));
    cout<<customer.at(205)<<"\n";
    cout<<"-*-*-*-*-*-*-\n";
    customer.clear();
    cout<<customer.empty();
    return 0;
}
