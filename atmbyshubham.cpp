#include<iostream>
using namespace std;
int main()
{
    cout<<"welcome to our ATM..\n";
    int n,m,choice,i,j,amount,x;
    int pin=1234,balance=500000;
    while(1)
    {
    cout<<"please Enter your pin..= ";
    cin>>n;
    if(n==pin)
    {
        cout<<"\n";
        cout<<"name xyz \t Acount no..1029384790"<<endl;
        cout<<"\n";
        cout<<"Your current balance="<<balance<<endl;
         balance=balance-amount;
    
    }
    else
    {
        cout<<"wrong..please check your pin code ";
        return 0;
    }
    cout<<"\n";
   
        cout<<"0.Exit\t1.withdraw \t 2.check balance \t 3.change pin\n";
        cout<<"choice your options= ";
        cin>>choice;
    switch(choice)
    {
        case 0:
        return 0;
        break;

        case 1:
          cout<<"Enter your amount= ";
           cin>>amount;
             if(amount>balance)
             {
                 cout<<"this amount is not avalabel in your current account .";
                 return 0;
             }

             else 
             {
                 int a[]={2000,500,200,100,50,20,10,5,2,1};
                  int m=sizeof(a)/sizeof (int);
                 for(j=0;j<=m+1;j++)
                 {
                     x=amount/a[j];
                     amount =amount-x*a[j];
                     if(x>0)
                     {
                         cout<<x << " x " <<a[j]<<endl;
                     }
                 }
                 
                 break;
                     
                     
             }

         /*case 2:
         cout<<"Account no. \t Account Name.\n1029384790 \t  xyz"<<endl;
         cout<<"\n";
         cout<<"Your current balance="<<balance;
         balance=balance-amount;
         return 0;*/

         case 3:
         cout<<"Enter your new for digit pin= ";
         cin>>pin;
         n=pin;
         break;

        case 4:
        break;
        default:
        break;
    }
    }
    
    return 0;
}