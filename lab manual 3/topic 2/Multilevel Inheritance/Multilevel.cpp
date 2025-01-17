
//multi_level inheritance

#include<iostream>
using namespace std;
class A
{
private:
    int x=10;
protected :
    int y=20;
public:
    int Z=30;

};
class B:public A
{

};
class C:public B
{
public:
    void getData()
    {
        //cout<<"X="<<x<<endl;//x can not access
        cout<<"Y="<<y<<endl;
        cout<<"z="<<Z<<endl;

    }
};
int main()
{
    C c;
c.getData();
    return 0;
}

