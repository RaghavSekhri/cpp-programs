#include <iostream>

using namespace std;

class complex
{
  int real,imag;
  public:
      friend istream& operator>>(istream& in,complex& c);
      friend ostream& operator<<(ostream& out,complex &c);
};
istream& operator>>(istream& in,complex& c)
{
    in>>c.real;
    in>>c.imag;
    return in;
}
ostream& operator<<(ostream& out,complex& c)
{
    out<<c.real<<"+"<<c.imag<<"i"<<"\n";
    return out;
}
int main()
{
    complex c;
    cin>>c;
    cout<<"Displaying the complex number"<<"\n";
    cout<<c;
   return 0;
}
