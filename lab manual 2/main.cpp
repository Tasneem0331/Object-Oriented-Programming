
#include<iostream>
using namespace std;
class test
{
private :
    int x;
    int y;
   static int z;
public :
    test()
    {cout<<"Empty constructor"<<endl;
    z++;
        x=0;
        y=0;
        showdata();


    }
    test(int a,int b)
    {
        cout<<"parameterized constructor"<<endl;
        z++;
        x=a;
        y=b;
        showdata();

    }
    test(test &a)
    {
       z++;
        cout<<"copy constructor"<<endl;
        x=a.x;
        y=a.y;
        showdata();
    }

    void showdata() const
    {
        cout<<"x="<<x<<endl<<"y="<<y<<endl<<"z="<<z<<endl;
    }
    void getdata(int a,int b)
    {
        z++;
        x=a;
        y=b;
        showdata();
    }
    int getz()
    {
        return z;
    }
    int  getx()
    {
        return x;
    }


};
int test::z=0;
int main()
{
    test t1;//default constructor
    test t2(10,20);//peramiterize constructor
    test t3=t2;//call copy constructor
test t4;
t4.getdata(40,60);
test t5(60,70);
cout<<"z="<<t2.getz();
int i=1;


    return 0;
}
