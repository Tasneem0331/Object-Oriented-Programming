#include <iostream>

using namespace std;
class circuit
{
private:
    double real;
    double img;
public:
    circuit(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    circuit operator+(circuit const &obj)
    {
        circuit res;
        res.real=real+obj.real;
        res.img=img+obj.img;
        return res;
    }
    void print()
    {

    cout<<real<<" +i"<<img<<endl;
    }
    circuit operator*(circuit const &obj)
    {
        circuit m;
        m.real=(real*obj.real)-(img*obj.img);
        m.img=(real*obj.img)+(img*obj.real);
        return m;


    }
    circuit operator/(circuit const &obj)
    {
        circuit div;
        double r=(obj.real*obj.real)+(obj.img*obj.img);
        div.real=((real*obj.real)+(img*obj.img))/r;
        div.img=((obj.real*img)-(real*obj.img))/r;
        return div;
    }

};

int main()
{
    circuit z1(3,4),z2(4,-3),z3(0,6),v(100,50),z,Z,I;
z=(z1*z2)/(z1+z2);
Z=(z*z3)/(z+z3);
I=v/Z;
    I.print();
}
