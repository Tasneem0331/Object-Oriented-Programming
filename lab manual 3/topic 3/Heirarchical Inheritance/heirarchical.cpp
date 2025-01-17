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
class B:public A
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
    void sumB(){

cout<<"In class B sum="<<getax()+bx<<endl;
    }

};
class C:public A{
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
    int  getcx(){
    return cx;
    }
    void getSum()
    {
        int sum=cx+getax();
        cout<<" In class C Sum="<<sum<<endl;
    }
};
int main()
{
    A a;

 C c;
 B b;
 b.sumB();
 c.getSum();
 cout<<"total sum:"<<a.getax()+b.getbx()+c.getcx()<<endl;
 return 0;
}

