//hybrid inheritance
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
class B:public virtual A
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
class C:public virtual  A{
private:
    int cx;
public:
    C(){
    cx=100;
    cout<<"C is created"<<endl;
    }
    int getCx(){
    return cx;
    }
    ~C()
    {
cout<<"C destructed"<<endl;
    }

};
class D:public B,public C{
private:
    int dx;
public:
    D(){
        dx=100;
        cout<<"D created"<<endl;
    }
    void getSum(){
    int sum=dx+getbx()+getCx()+getax();
    cout<<"sum="<<sum<<endl;
    }
    ~D()
    {
cout<<"D destructed"<<endl;

    }



};
int main()
{
 D d;
 d.getSum();
 return 0;
}

