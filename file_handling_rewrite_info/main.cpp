#include <iostream>
#include <fstream>
using namespace std;
class student
{
    string name;
    int roll,age;
public:
    void getdata()
    {
        cin>>name;
        cin>>roll;
        cin>>age;
    }
    void putdata()
    {
        cout<<name<<" ";
        cout<<roll<<" "<<age<<"\n";
    }
};
int main()
{
    ofstream ofile;
    ofile.open("Sample.txt");
    student ob[10];
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        ob[i].getdata();
        ofile.write((char*)&ob[i],sizeof(student));
    }
    int n1;
    cin>>n1;
    ofile.seekp((n1-1)*sizeof(student),ios::beg);
    student ob2;
    ob2.getdata();
    ofile.write((char*)&ob2,sizeof(student));
    ofile.close();
    ifstream ifile;
    ifile.open("Sample.txt");
    while(ifile.read((char*)&ob[i],sizeof(student)))
    {
        ob[i].putdata();
        i++;
    }
    ifile.close();
    return 0;
}
