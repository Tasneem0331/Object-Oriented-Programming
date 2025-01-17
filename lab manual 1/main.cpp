#include<bits/stdc++.h>
#include<conio.h>
#include<stdlib.h>
#include<string>
using namespace std;
int n=-1,c=100;
class account
{
private:
    int acNo;
    int age;
    string name;

    float balance=0;
public:

    void setData()
    {
        cin.ignore();

    cout<<"Enter Name:";
   getline(cin,name);

   cout<<"Enter balance:";
    cin>>balance;
    cout<<"Enter Age:";
    cin>>age;
    c++;
    cout<<"Your account number: "<<c<<endl;
acNo=c;


    cout<<"successfully saved"<<endl;
    }

    void getdata()
    {
        acNo=-1;
    }


    int Search(int ac)
    {
        int flag=0;
            if(ac==acNo)
                flag=1;
        return (flag);
    }
void display(){
    cout<<"*********ACCOUNT DETAILS*********"<<endl;
    cout<<"\tAccount Number: "<<acNo<<endl;
    cout<<"\tAccount holder name:"<<name<<endl;
    cout<<"\tAge:"<<age<<endl;
    cout<<"\tYour balance:"<<balance<<endl;
}
int getBalance(){
return balance;
}
int getAcno(){
return acNo;
}

    void deposit(int money)
    {
        balance=balance+money;
    }
    void setBalance(int money){
    balance=balance-money;
    }


    void withdraw(float money)
    {
        if(balance>=money)
            {
            balance=balance-money;
            cout<<"successfully withdraw"<<endl;
            cout<<"Your current balance is: "<<balance<<endl;
            }
            else
            {
                cout<<"Insufficient Balance"<<endl;
                checkBalance();
            }
    }


    void checkBalance()
    {
        cout<<"Your balance is:"<<balance<<endl;
        cout<<"Please try again!!"<<endl;
    }



};
int main()
{
    int option;
float money;
account a[1000];
int i=0,ac,flag;
string id;

for(; ;){
        cout<<"Enter any key to go main menu"<<endl;
getch();
system("CLS");
    cout << "******Main Menu******" << endl;
    cout<<"1.Open new account"<<endl;
    cout<<"2.Close Old account"<<endl;
    cout<<"3.Deposit Money"<<endl;
    cout<<"4.Withdraw Money"<<endl;
    cout<<"5.Check Balance"<<endl;
    cout<<"6.Display"<<endl;
    cout<<"7.Display All Account "<<endl;
    cout<<"8.How much account exist"<<endl;
    cout<<"9.Transfer Balance"<<endl;
    cout<<"10.Exit"<<endl;
    cout<<"Enter Your option(1-10)"<<endl;
    cin>>option;
    if(option==10)
        {cout<<"End of Program Run"<<endl;
        break;}
        switch(option){
        case 1:
            {
                cout<<"Enter admin id:";
                cin>>id;
               if(id=="saima")
                {
                        n++;
                a[n].setData();
                }
                else
                    cout<<"You are not the admin"<<endl;
               break;
             }
         case 2:
             {
                cout<<"Enter your account number:";
                 cin>>ac;
                  flag=0;
                 for(i=0;i<=n;i++)
                 {
                     if(a[i].Search(ac)==1)
                     { flag++;
                         cout<<"account is found"<<endl;

                         a[i].getdata();
                         cout<<"Successfully delete the account"<<endl;
                         break;
                     }
                 }
                if(flag==0)
                 {
                    cout<<"account not found"<<endl;
                 }

                break;
             }
          case 3:
              {
                  cout<<"Enter your account number"<<endl;
                  cin>>ac;
                  flag=0;
                  for(i=0;i<=n;i++)
                  {
                      if(a[i].Search(ac)==1)
                      {flag++;
                          cout<<"How much money you want to deposit?"<<endl;
                          cin>>money;
                          a[i].deposit(money);
                          cout<<"successfully Deposited"<<endl;
                          break;
                      }
                  }
                  if(flag==0)
                    cout<<"Account not found"<<endl;
                break;
              }
           case 4:
               {
                  cout<<"Enter you account number:"<<endl;
                  cin>>ac;
                  flag=0;
                  for(i=0;i<=n;i++)
                  {
                      if(a[i].Search(ac)==1)
                      {flag++;
                          cout<<"Enter amount of money you want to be withdraw:";
                          cin>>money;
                          a[i].withdraw(money);
                          break;
                      }
                  }
                  if(flag==0)
                  {
                    cout<<"account not found"<<endl;
                  }
                break;
               }
            case 5:
                {
                  cout<<"Enter your account number"<<endl;
                  cin>>ac;
                  flag=0;
                  for(i=0;i<=n;i++)
                    {
                        if(a[i].Search(ac)==1)
                        {flag++;
                           a[i].checkBalance();
                            break;
                        }
                    }
                    if(flag==0)
                        cout<<"Account not found"<<endl;
                    break;
                }
                case 6:{
                cout<<"Enter your account number:";
                cin>>ac;
                flag=0;
                for(i=0;i<=n;i++){
                    if(a[i].Search(ac)==1){
                        flag=1;
                        a[i].display();
                        break;
                    }
                }
                if(flag==0){
                    cout<<"Account does not Exist"<<endl;
                }
                break;
                }
                case 7:
                    {
                    if(n<0){
                        cout<<"No account exist"<<endl;
                    }
                    else{
                        for(i=0;i<=n;i++){
                            a[i].display();
                        }

                    }


                        break;
                    }
            case 8:
                cout<<n+1<<"  account are exist in this Bank"<<endl;
                break;
            case 9:{
                int from,to,c=0,id1=-1,id2=-1,tk;
                cout<<"Select an account ID:";
                cin>>from;
                cout<<"Enter the ID of Transferring :";
                cin>>to;
                for(i=0;i<=n;i++){
                    if(a[i].getAcno()==from){
                            c++;
                    id1=i;
                    }
                    else if(a[i].getAcno()==to){
                        c++;
                        id2=i;
                    }
                }
                if(c==2){
                if(a[id1].getBalance()>500){
                    cout<<"Enter amount:";
                    cin>>tk;
                    if((a[id1].getBalance()-500)>tk){
                        a[id2].deposit(tk);
                       a[id1].setBalance(tk);
                        cout<<tk<<" tk is successfully transfered from Account "<<from<<" to account "<<to<<endl;
                    }
                    else{
                        cout<<"Insufficient balance"<<endl;
                        a[id1].checkBalance();}
                }
                else{
                    cout<<from <<" Your balance is less than 500"<<endl;
                    a[id1].checkBalance();
                }
                }
             else {
                cout<<"Account does not Exist"<<endl;
             }
            break;
            }
            default:
                cout<<"Invalid"<<endl<<"Enter Again!!"<<endl;
             }
}
    return 0;
}
