
//Multilevel inheritance
#include<iostream>
using namespace std;
class A
{
private:
    int ax;
public:
    A()
    {
        ax=10;
        cout<<"A created"<<endl;
    }
    int getax(){
    return ax;}
    ~A()
    {
cout<<"A destructed"<<endl;
    }
};
class B
{
private:
    int bx;
public:
    B()
    {
        bx=20;
        cout<<"B is created"<<endl;
    }
    int  getbx()
    {
        return bx;
    }
    ~B()
    {
cout<<"B destructed"<<endl;
    }

};
class C:public A,public B{
private:
    int cx;
public:
    C(){
    cx=100;
    cout<<"C is created"<<endl;
    }
    ~C()
    {
cout<<"C destructed"<<endl;
    }
    void getSum()
    {
        int sum=cx+getbx()+getax();
        cout<<"Sum="<<sum<<endl;
    }
};
int main()
{
 C c;
 c.getSum();
 return 0;
}

