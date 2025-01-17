#include<iostream>
using namespace std;
 template<typename T1,typename T2> class A{
private:
    T1 x;
    T2 y;
public:
    void setData(T1 x,T2 y){
    this->x=x;
    this->y=y;
        }
    T2 sum(){
    return x+y;
    }

};
int main()
{
  A<int,int>a;
  a.setData(10,10);
  cout<<"Sum="<<a.sum()<<endl;

  A<int,double> b;
  b.setData(10,23.8);
  cout<<"sum="<<b.sum()<<endl;

A<double,int> c;
  c.setData(12.7,89);
  cout<<"sum="<<c.sum()<<endl;

  A<double,double> d;
  d.setData(10.9,23.8);
  cout<<"sum="<<d.sum()<<endl;
}
