#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofile;
    ofile.open("Sample.txt");
    ofile<<"Hello Students";
    ofile.close();
    ofile.open("Sample1.txt");
    ifstream ifile;
    ifile.open("Sample.txt");
    char ch;
    ch=ifile.get();
    while(!ifile.eof())
    {
        ofile.put(ch);
        ch=ifile.get();
    }
    ifile.close();
    ofile.close();
    return 0;
}
