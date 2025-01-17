//Hybrid/Diamond Inheritance

#include<iostream>
using namespace std;
class A
{
    private:
        int x=10;
    protected:
        int y=20;
    public:
        int z=30;
    public:
        void getA()
        {
            cout<<"x="<<x<<endl;
        }
};
class B:public virtual A    //b and c hierarchical
{

};
class C:public virtual A
{

};
class D:public B,public C   //multiple
{
    public:
    void getdata()
    {
        //cout<<"x="<<x<<endl;
       cout<<"y="<<y<<endl;
     cout<<"z="<<z<<endl;
    }
};
int main()
{
   D d;
   d.getA();
   d.getdata();
}

