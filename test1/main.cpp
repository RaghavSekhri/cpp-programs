#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
for(int i=0; i<n-1; i++)
 {
     if(x[i] < x[i+1])
     {
        int temp = x[i];
        x[i] = x[i+1];
        x[i+1] = temp; // swap values
        again = true;
     }
     if(i==n-2 && again==true)
     {
        i = 0; again = false;
     }
 }
    return 0;
}
