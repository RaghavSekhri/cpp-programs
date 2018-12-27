#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofile;
    ofile.open("Sample.txt");
    string str;
    int roll,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        ofile<<str<<"\n";
        cin>>roll;
        ofile<<roll<<"\n";
    }
    ofile.close();
    ifstream ifile;
    ifile.open("Sample.txt");
    for(int i=0;i<n;i++)
    {
        str=ifile.get();
        cout<<str<<" ";
        roll=ifile.get();
        cout<<roll<<" ";
    }
    ifile.close();
    return 0;
}
