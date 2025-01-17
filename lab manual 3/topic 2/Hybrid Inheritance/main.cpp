#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class test
{
private:
    int x;
    int y;
    static int z;//soabr jonno commmon
public:

    test() //statement 1
    {
        x=0;
        y=0;
        z++;
    }
    test(int a,int b)  //statement 2
    {
        x=a;
        y=b;
       z++;
    }
    test (test &p)  //statement 3
    {
        x=p.x;
        y=p.y;
        z++;
    }

    void setdata(int a,int b) //statement 5
    {
        x=a;
        y=b;
        z++;
    }
    void getdata() const //statement 7
    {
        cout<<"x="<<x<<endl<<"y="<<y<<endl<<"z="<<z<<endl;
    }
    int getz() //statement 6
    {
        return z;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }

};
int test::z=0;//static er jonno define

int main()
{
    test t[5];//statement 8
    t[0].setdata(1,2);
    t[1].setdata(3,4);
    t[2].setdata(5,6);
    t[3].setdata(7,8);
    t[4].setdata(9,10);

    int sum,i;
    for(i=0;i<5;i++) //statement  9
    {
        sum=sum+t[i].getx();
    }
    cout<<"sum of X value: "<<sum<<endl;
    int a[5];
    for(i=0;i<5;i++)
    {
        a[i]=t[i].gety();
    }
    int maxi=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>maxi)
            maxi=a[i];
    }
    cout<<"The maximum value of y is "<<maxi<<endl;

return 0;
}
