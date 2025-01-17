#include<iostream>
using namespace std;
class A{
public:
    virtual void print()=0;

};
class B:public A{
public:
    void print(){
    cout<<"Inside Print() of class B"<<endl;
    }
};
int main(){
   // A a;
    //a.print()

   /* B b; //can be access
    b.print();
*/
    /*A a;   //can't be access
    A *p;
    p=&a;
    p->print();
*/
B b;
A *p;
p=&b;
p->print();
}
