//heirarchical inheritannce
#include<iostream>
using namespace std;
class A
{
    private:
        int x=10;
    protected:
        int y=20;
    public:
        int Z=30;
};
class B:public A
{
    public:
    void getData()
    {
        cout<<"In class B"<<endl;
//       cout<<"X="<<x<<endl;//x can not access bcz it is private int class A
        cout<<"Y="<<y<<endl;
        cout<<"z="<<Z<<endl;

    }

};
class C:public A
{
    public:
    void getData()
    {
        cout<<"In class C"<<endl;
        //cout<<"X="<<x<<endl;//x can not access
        cout<<"Y="<<y<<endl;
        cout<<"z="<<Z<<endl;

    }
};
int main()
{
    B b;
    C c;
    b.getData();
c.getData();
    return 0;
}

