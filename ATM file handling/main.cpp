#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>
using namespace std;

class bank
{
    public:
void info()
{
    string name,acc,pin,balance;
    fstream data;
    cout<<"Enter Your Name : ";
    cin>>name;
    cout<<"\n";
    cout<<"Enter Your Account Number : ";
    cin>>acc;
    cout<<"\n";
    cout<<"Enter Your Pin : ";
    cin>>pin;
    cout<<"\n";
    cout<<"Enter Your Balance : ";
    cin>>balance;
    cout<<"\n";
    string ext=acc+".txt";
    data.open(ext.c_str(),ios::out);
    data<<name;
    data<<"\n";
    data<<acc;
    data<<"\n";
    data<<pin;
    data<<"\n";
    data<<balance;
    data<<"\n";
    data.close();
}
/*void dataverify()
{
    fstream verify;
    string acc1;
    char dataverif[200];
    int i;
    cout<<"Enter Your Account Number : ";
    cin>>acc1;
    string ext1=acc1+".txt";
    verify.open(ext1.c_str(),ios::in);
    string a[4]={"Name : ","Account Number : ","Pin : ","Balance : "};
    for(i=0;i<4;i++)
    {
        verify>>dataverif;
        cout<<a[i]<<dataverif<<endl;
    }
}*/
void task()
{
    int task1;
    cout<<"For Balance Check, Press 1  \n";
    cin>>task1;
    switch(task1)
    {
    case 1:
        balancecheck();
    }
}
void balancecheck()
{
    fstream balcheck;
    string inp1,withdraw;
    char bach[200];
    int j,r=0;
    cout<<"Enter Your Account Number : ";
    cin>>inp1;
    string ext2=inp1+".txt";
    balcheck.open(ext2.c_str(),ios::in);
    string c[100],b[1]={"Balance : "};
    for(j=0;j<4;j++)
    {
        balcheck>>bach;
        c[r]=bach;
        r++;
    }
    cout<<b[r-4]<<c[r-1]<<endl;
    cout<<"If you wish to withdraw money, enter your withdrawing amount : ";
    cin>>withdraw;
    stringstream originalbal(c[r-1]);
    stringstream with(withdraw);
    int z,x=0,y=0;
    originalbal>>x;
    with>>y;
    z=x-y;
    cout<<"Your Current Balance is : "<<z;
    stringstream ss;
    z>>s;
    string str=ss.str();
    int g;


    string acc, bal , name ;


    for(g=0;g<4;g++)
    {





    }
}
};
int main()
{
    bank obj;
    obj.info();
   // obj.dataverify();
    obj.task();
    return 0;
}
