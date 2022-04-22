#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n,i,j,prime,start;
cout<<"enter the low number=";
cin>>start;
cout<<"enter the high number=";
cin>>n;
cout<<"Shubham numbers are ";
for(i=start;i<=n;i++)
{
    prime=1;
    for(j=2;j<=i/2;j++)
    {
    if(i%j==0)
    {
        prime=0;
        break;
    }
}
if(prime==1)
{
    cout<<i<<",";
}
}

        return 0;
    }



