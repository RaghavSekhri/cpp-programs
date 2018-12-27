#include<iostream>
using namespace std;
int main()
{
    string id;
    cin>>id;
  int flag=0;
  try
  {
  int index,index1,flag1=0;
  if(id!="@")
  {
    flag=1;
    throw 1;
  }
    if(id!=".")
    {
      flag=1;
      throw 1.1;
    }
  index=id.find('.');
  index1=id.find('@');
    if(index<index1)
    {
      flag=1;
      throw 'x';
    }
    if(index>index1)
    {
        throw 'y';
    }
  }
  catch(int)
  {
    cout<<"Invalid";
  }
  catch(float)
  {
    cout<<"Invalid";
  }
  catch(char *s)
  {
      if(s=="x")
    cout<<"Invalid";
  }
  catch(char *d)
  {
      if(d=="y")
      cout<<"valid";
  }
  if(flag==0)
  {
    cout<<"Valid";
  }
  return 0;
}
