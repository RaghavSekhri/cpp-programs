#include <iostream>

using namespace std;

int add(int a,int b);
float add(float a,float b);

int main()
{
    int a,b;
    float x,y;
    cin>>a>>b;
    cin>>x>>y;
    cout<<add(a,b)<<endl;
    cout<<add(x,y)<<endl;
    return 0;
}

int add(int a,int b)
{
    return a+b;
}

float add(float a,float b)
{
    return a+b;
}
