#include<iostream>
#include<math.h>
int itsprime(int n);
using namespace std;
int main()
{
    int n,f;
    cout<<"Enter the number";
    cin>>n;
    for(int i=2;i<=10;i++)
    {
    if(n%i==0)
    {
    cout<<i<< ",";
    }
    }
    return 0;
}
int itsprime(int n)
    {
    int i,limit;
    limit=sqrt(n);
    for(i=2;i<=limit;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
    }  