#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool thirty_fourty(float h)
    {
        return (h>=30 && h<=40);
    }
int main()
{
    int n,m,y;
    int i,j;
    float p,x;
    vector<float> v;
    cout<<"Enter how many students are there : ";
    cin>>n;
    cout<<"\n";
    cout<<"Enter maximum marks : ";
    cin>>m;
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        cout<<"Enter marks of student "<<i+1<<" : ";
        cin>>x;
        p=((x/m)*100);
        v.push_back(p);
    }
    cout<<count_if(v.begin(),v.end(),thirty_fourty);
    return 0;
}
