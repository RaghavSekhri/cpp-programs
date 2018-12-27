#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofile;
    ofile.open("Sample.txt");
    ofile<<"Hello Students";
    ofile.close();
    ifstream ifile;
    char ch;
    ifile.open("Sample.txt");
    ch=ifile.get();
    while(!ifile.eof())
    {
        cout<<ch;
        ch=ifile.get();
    }
    ifile.close();
    return 0;
}
