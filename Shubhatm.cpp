#include<iostream>
using namespace std;
int main()
{
    int choice,pin,amount,i,x;
    int originalpin=2052,balance=1000;
    cout<<"Welcome to shubh ATM.."<<endl;
   while (1)
   {
       cout<<"0-Exit\t1-Change Pin\t2-Deposit\t3-withdraw\t4-check balance"<<endl;
        cout<<"Choice"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 0:

            return 0;
            break;
        case 1:

            cout<<"Change Pin"<<endl;
            cout<<"Enter your pin= ";
            cin>>pin;
            if(pin==originalpin)
            {
                cout<<"Enter your new pin= "<<endl;
                cin>>originalpin;
                cout<<"again enter your new= "<<endl;
                cin>>originalpin;
                pin=originalpin;
            }
            else
            {
                cout<<"your pin is wrong..";
            }
            break;
            case 2:
             
            cout<<"Deposit"<<endl;
            cout<<"Enter your pin=";
            cin>>pin;
            if(pin==originalpin)
             {
            cout<<"Enter your amount"<<endl;
            cin>>amount;
            balance=amount+balance;
            cout<<"Your current amount= "<<balance<<endl;
             }
             else
             {
                  cout<<"your pin is wrong..";
             }
            break;
            case 3:

            cout<<"withdraw"<<endl;
            cout<<"Enter your pin"<<endl;
            cin>>pin;
            cout<<"Enter your amount"<<endl;
            cin>>amount;
            if(amount<=balance)
            {
                int a[]={2000,1000,500,200,100,50,20,10,5,2,1};
                int n=sizeof (a)/sizeof (int);
                for(i=0;i<=n+1;i++)
                {
                    x=amount/a[i];
                    amount=amount-x*a[i];
                    if(x>0)
                    {
                        cout<<x<<"x"<<a[i]<<endl;
                       balance=balance-amount;
                    //cout<<"your current amount= "<<balance<<endl;
                    }

     
                }
                cout<<"hii";
               // balance=balance-amount;
            cout<<"your current amount= "<<balance<<endl;

            }
            

            else
            {
                cout<<"Amount enterd is out of balance";
            }
  
                
            break;
            case 4:
            cout<<"Enter your pin= "<<endl;
            cin>>pin;
            if(pin==originalpin)
            {
             cout<<"name\tMR.shubham mourya\nAccount No..\t12345678910"<<endl;
             cout<<"your current amount="<<balance<<endl;

            }
            else
            {
                 cout<<"your pin is wrong..";
            }
            break;


        default:
            break;
        }
   }
   
 return 0;
}