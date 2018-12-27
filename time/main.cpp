#include <iostream>

using namespace std;

class time1
{
    int h,m,s;
    public:
        time1()
        {

        }
        time1(int sec)
        {
            s=sec%60;
            int t=sec/60;
            h=t/60;
            m=t%60;
        }
        void put()
        {
            cout<<h<<","<<m<<","<<s;
        }
};

int main()
{
    int sec;
    cin>>sec;
    time1 t;
    t=sec;  //passing an argument inside constructor
    t.put();
    return 0;
}
