#include <iostream>
#include <fstream>
using namespace std;

class input
{
public :
    void run();
};

void input::run()
{
    fstream inputfile;
    inputfile.open("hello.txt",ios::out);
    inputfile<<"Raghav";
    inputfile<<"Sekhri";
    inputfile.close();
    inputfile.open("hello.txt",ios::in);
    char data[100];
    int i;
    for(i=0;i<2;i++)
    {
        inputfile>>data;
        cout<<data<<endl;
    }
}

int main()
{
    input obj;
    obj.run();
    return 0;
}
