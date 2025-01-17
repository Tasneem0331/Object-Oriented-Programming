//single Inheritance

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
    int getX(){
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
    void getSum()
    {
        cout<<"sum="<<bx+getX()<<endl;
    }
    ~B()
    {
cout<<"B destructed"<<endl;
    }

};
int main()
{
 B b;
cout<<"ax="<< b.getX()<<endl;
 b.getSum();
 return 0;
}

