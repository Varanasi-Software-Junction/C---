#include<iostream>
using namespace std;
int main()
{
    int n=21;
    int fact=2;
    int max=0;
    while(n>1)
    {
        if(n%fact==0)
        {
            //cout<<fact<<",";
            if(fact>max)
            max=fact;

        
         while(n%fact==0)
         {
             n=n/fact;
            if(n==1)
             {
                 cout<<"max="<<max;
             return 1;
            }
         }
            
        }
            fact+=1;
    }
    
cout<<"max="<<max;

    return 0;

}