#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;

class input
{
public:
    void file();
};
void input::file()
{
    fstream inputfile;
    char str[100];
    int chars;
    cout<<"Enter file name : ";
    cin>>str;
    inputfile.open(str,ios::out);
    cout<<"File is created : "<<str<<endl;
    cout<<"Enter how many characters you want to enter : ";
    cin>>chars;
    int i;
    string linecontent;
    string original;
    string space=" ";
    for(i=0;i<chars;i++)
    {
        cout<<"Enter line "<<i<<":";
        cin>>linecontent;
        original=linecontent+space;
        if(linecontent=="exit")
            break;
        inputfile<<original;
    }
}

int main()
{
    input obj;
    obj.file();
    return 0;
}
