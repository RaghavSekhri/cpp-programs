#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ofile;
    ofile.open("Copy.txt");
    ifstream ifile;
    ifile.open("Sample10.txt");
    char ch;
    while((ch=ifile.get())!=EOF)
    {
        ofile.put(ch);
    }
    ifile.close();
    ofile.close();
}
