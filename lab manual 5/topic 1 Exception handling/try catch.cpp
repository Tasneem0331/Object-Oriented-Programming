#include<iostream>
using namespace std;
int main(){

int i;
int ax[5]={10,20,60,40,30};
cout<<"Enter Index"<<endl;
cin>>i;
try{
if(i<0 || i>4){
    throw i;
}
cout<<"ax["<<i<<"]="<<ax[i]<<endl;
}
catch(int x)
{
    cout<<"Index accessed the Range .The index is"<<i<<endl;
}
try{
if(i<0 || i>4){
    throw "Out of Range";
}
cout<<"ax["<<i<<"]="<<ax[i]<<endl;
}

catch(char const *ex){
cout<<ex<<endl;
}


try{
if(i<0 || i>4){
    throw runtime_error("runtime Error");
}
cout<<"ax["<<i<<"]="<<ax[i]<<endl;
}



catch(runtime_error e){
cout<<e.what()<<endl;
}

catch(...){
cout<<"no catch block does not match"<<endl;

}

}
