#include<iostream>
using namespace std;
class Test
{
public:
    int sum(int a )
    {
        return a;
    }
    int sum(int a,int b)
    {
        return (a+b);
    }
    double sum(double a,int b)
    {
       double r=a+b;
       return r;
    }
    double sum(int a,double b)
    {
        return (a+b);
    }
    double  sum(double a,double b)
    {
        return (a+b);
    }
};
int main()
{
    Test t;
   cout<<t.sum(10)<<endl;
    cout<<t.sum(10,20)<<endl;
    cout<<t.sum(5.7,20)<<endl;
   cout<< t.sum(10,2.6)<<endl;
    cout<<t.sum(10.5,20.7)<<endl;
}
