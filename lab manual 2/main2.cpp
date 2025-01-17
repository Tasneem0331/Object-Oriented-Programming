#include<iostream>
using namespace std;
class test
{
private:
    int x;
    int y;
    static int z;
public:
    test ()
    {
        z++;
        x=0;y=0;
        cout<<"Empty constructor"<<endl;
        showdata();
    }
    test (int a,int b)

    {
        z++;
        cout<<"Parameterize constructor"<<endl;
        x=a;
        y=b;
        showdata();
    }
    test (test &a)
    {
        z++;
        x=a.x;
        y=a.y;
        cout<<"copy constructor"<<endl;
        showdata();
    }

    void showdata()
    {
        cout<<"x="<<x<<endl<<"y="<<y<<endl;
    }
    void getData(int a,int b)
    {z++;

        x=a;
        y=b;
    }
    void total()
    {
        cout<<"Total object created "<<z<<endl;
    }
     displaydata() const
    {
        cout<<"Constant function"<<endl;
        cout<<"x="<<x<<endl<<"y="<<y<<endl<<"z="<<z<<endl;
            }
            int getx()
            {
                return x;
            }
            int gety()
            {
                return y;
            }
};
int test::z=0;
int main()
{
    test t1;
    test t2(10,20);
    t1.total();
    return 0;
}
