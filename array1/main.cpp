#include <iostream>

using namespace std;

class array
{
    public:
    array()
    {
        int a[5],b[5],i;
        for(i=0;i<5;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<5;i++)
        {
            b[i]=a[i];
        }
        for(i=0;i<5;i++)
        {
            cout<<b[i]<<"\n";
        }
    }
};
int main()
{
    array obj;
    return 0;
}
