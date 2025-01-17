//single inheritance
#include<iostream>
using namespace std;
class A
{
private :
    int x=10;
protected:
    int y=20;
public:
    int z=30;

    void getdata()
    {cout<<"In class A"<<endl;
       cout<<"x="<<x<<endl;
    cout<<"Y="<<y<<endl;
    cout<<"z="<<z<<endl;
    }
};
class B:public A
{
public:
void getA()
{
cout<<"In class B"<<endl;

    //cout<<"x="<<x<<endl; //X is private in class A.
    cout<<"Y="<<y<<endl;
    cout<<"z="<<z<<endl;
}
};

int main()
{
  A a;
  B b;
  a.getdata();
b.getA();
}

