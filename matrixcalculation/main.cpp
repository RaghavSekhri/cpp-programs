#include <iostream>

using namespace std;
int i,j;
class matrix
{
public:
    int a[3][3];
    void getdata()
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                cin>>a[i][j];
        }
    }
    void putdata()
    {
        for(i=0;i<3;i++)
        {

            for(j=0;j<3;j++)
            {
                cout<<a[i][j];
            }
            cout<<"\n";
        }
    }
    matrix multi(matrix obj,matrix obj1)
    {
     int k;
     matrix obj4;
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
            obj4.a[i][j]=0;
            for(k=0;k<3;k++)
            {

                obj4.a[i][j]+=obj.a[i][k] * obj1.a[k][j];
            }

        }
    }
    return obj4;
    }
    void add(matrix obj2,matrix obj3)
    {
       for(i=0;i<3;i++)
       {

        for(j=0;j<3;j++)
        {
            obj3.a[i][j]+=obj2.a[i][j];
        }
       }
       obj3.putdata();
    }
};



int main()
{
    matrix obj,obj1,obj2,obj3;
    obj.getdata();
    obj1.getdata();
    obj2.getdata();
    obj3=obj5.multi(obj,obj1);
    obj5.add(obj2,obj3);

    return 0;
}
