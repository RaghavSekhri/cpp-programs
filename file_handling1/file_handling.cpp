#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ofile;
    ofile.open("Sample10.txt");
    string str;
    int roll,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        ofile<<str<<"\n";
        cin>>roll;
        ofile<<roll;
    }
    ofile.close();
    ifstream ifile;
    ifile.open("Sample10.txt");
    for(int i=0;i<n;i++)
    {
        ifile>>str;
        cout<<str<<" ";
        ifile>>roll;
        cout<<roll<<" ";
    }
    ifile.close();
}
