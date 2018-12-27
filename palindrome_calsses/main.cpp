#include <iostream>

using namespace std;

class palindrome
{
    private:
       int a;
public:
    void getdata();
    void palindromecheck();
};

void palindrome::getdata()
{
    cin>>a;
}

void palindrome::palindromecheck()
{
    int r,rev=0;
    int z;
    z=a;
    while(a!=0)
    {
    r=a%10;
    rev=rev*10+r;
    a=a/10;
    }
    if(rev==z)
        cout<<"Number is palindrome";
    else
        cout<<"Number is not palindrome";
}

int main()
{
    palindrome obj;
    obj.getdata();
    obj.palindromecheck();
    return 0;
}
