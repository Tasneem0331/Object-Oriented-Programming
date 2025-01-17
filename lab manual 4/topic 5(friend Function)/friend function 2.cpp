#include<iostream>
using namespace std;
class A{
private:
    int x;
public:
    void Display(){
    cout<<"X="<<x<<endl;
    }
    friend void Add(A &a);
    friend void IncX(A &b);
    friend void DecX(A &a);

};
void Add(A &a){
a.x=10;
}
void IncX(A &b){
b.x=b.x+10;
}
void DecX(A &a){
a.x=a.x-5;
}
int main(){
    A a;
    Add(a);
    cout<<"After Calling Add function ";
    a.Display();
    IncX(a);
    cout<<"After calling IncX function :";
    a.Display();
    DecX(a);
    cout<<"After calling decX function ";
    a.Display();

}
