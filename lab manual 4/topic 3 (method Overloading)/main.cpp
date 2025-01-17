//method overloading
#include <iostream>
using namespace std;
class A
{
public:
    void print()
    {
        cout<<"inside print() of class A"<<endl;
    }
};
class B:public A
{
public:
    void print ()
    {
        cout<<"Inside print() of class B"<<endl;
    }
};

int main()
{
   /*A a;
   a.print();
   B b;
   b.print();
   */
   A a;
   B b;
   A *p;
   p=&a;
   p->print();

}
