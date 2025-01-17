#include<iostream>
using namespace std;
int main()
{
    string pass;
    char ch;
    cout<<"Enter your password"<<endl;
while(ch!=32)
{
    cin>>ch;

    push_back(pass,ch);
    cout<<"*";

}
if(pass=="jahin")
    cout<<"corect"<<endl;
else
    cout<<"not"<<endl;
return 0;
}
