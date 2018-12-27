//program to fing the volume of a box using default arguments
#include <iostream>

using namespace std;

void volume(int length=3,int breadth=5,int height=7);

int main()
{
    volume();
    volume(5);
    volume(4,5);
    volume(2,5,7);
    return 0;
}

void volume(int length,int breadth,int height)
{
    cout<<"Volume = "<<length*breadth*height<<endl;
}
