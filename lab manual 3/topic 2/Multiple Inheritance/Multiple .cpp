//Multiple inheritance

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
class B
{
   private:
       int p=100;
   protected:
    int q=200;
   public:
    int r=300;

};
class C:public A,public B
{
    public:
    void getdata()
    {
//        cout<<"X="<<x<<endl;//x can not access because it private in class A
         cout<<"In class A"<<endl;
        cout<<"Y="<<y<<endl;
        cout<<"z="<<Z<<endl;
//      cout<<"P="<<p<<endl;//x can not access because it is private int class B
        cout<<"In class B"<<endl;
        cout<<"Q="<<q<<endl;
        cout<<"R="<<r<<endl;

    }
};
int main()
{
    C c;
c.getdata();
    return 0;
}



