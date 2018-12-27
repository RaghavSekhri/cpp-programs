#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofile;
    ofile.open("informative_file.txt");
    ifstream ifile;
    ifile.open("F:\\Codeblocks Coding\\file_handling\\Sample10.txt");
    int count=0;
    char ch;
    if(!ifile.is_open())
        cout<<"open failed"<<endl;
    ch=ifile.get();
     while(ch!=EOF)
     {
         ch=ifile.get();
         count++;
     }
     ifile.close();
     ofile<<count;
     ofile.close();
    return 0;
}
