#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofile;
    ofile.open("Sample.txt");
    ofile<<"hello";
    ofile.close();
    return 0;
}
