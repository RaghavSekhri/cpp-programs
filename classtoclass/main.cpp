#include<math.h>
#include <iostream>

using namespace std;
/*
class rectangle
{
    int area,length,breadth;
    public:
    rectangle()
    {

    }
    rectangle(int x)
    {
        length=x;
        breadth=2*x;
    }
    void calculate()
    {
        area=length*breadth;
    }
    int getarea()
    {
        return area;
    }
};


class circle
{
int area;
float r;
    public:
        circle()
        {

        }
        circle(rectangle rob)
        {
            area=rob.getarea();
            r=sqrt(area/3.14);
        }
        operator float()
        {
            return r;
        }
};
int main()
{
   circle c;
   rectangle r;
   int value;
   cin>>value;
   r=value;
   r.calculate();
   c=r;
   int radius=c;
   cout<<radius;
    return 0;
}


/*                                                               or                                                                                          */
class circle
{
    int area;
    float r;
public:
    circle()
    {

    }
    circle(int x,float y)
    {
       area=x;
       r=y;
    }
    operator float()
    {
        return r;
    }
};
class rectangle
{
    int length,breadth,area;
public:
    rectangle()
    {

    }
    rectangle(int x)
    {
        length=x;
        breadth=2*x;
    }
    void calculate()
    {
        area=length*breadth;
    }
operator circle()
{
    return circle(area,sqrt(area/3.14));
}
};
int main()
{
   circle c;
   rectangle r;
   int value;
   cin>>value;
   r=value;
   r.calculate();
   c=r;
   int radius=c;
   cout<<radius;
    return 0;
}

