#include<iostream>
using namespace std;
class Father
{
private:
    int money=10;
protected:
    int gold=20;
public:
    int land=100;
void getFather()
{
    cout<<"From Father class"<<endl;
    cout<<"money="<<money<<endl;
    cout<<"Land="<<land<<endl;
    cout<<"gold="<<gold<<endl;
}

};
class son:public  Father
{
public:

void getson()
{
    cout<<"from son class"<<endl;
// cout<<"money="<<money<<endl;//private
    cout<<"Land="<<land<<endl;//public
    cout<<"gold="<<gold<<endl;//protected
}
};
class Grandson: public son
{
    public:
        void getgrandson()
{
    cout<<"from son class"<<endl;
// cout<<"money="<<money<<endl;//private
  cout<<"Land="<<land<<endl;//public
  cout<<"gold="<<gold<<endl;//protected
}
};


int main()
{Father f;
//f.getData(10,20,30);
f.getFather();
son s;
Grandson g;
s.getson();
g.getgrandson();
}
