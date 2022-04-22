#include<iostream>
using namespace std;
int main()
{
    int n,value,i;
    int rev=0,rem,m=1;
    cout<<"Enter the higher limit";
    cin>>n;
    while(n>0)
    {
   rem = n % 10;
    rev = rev * 10 + rem;
    n /= 10;
    }
    
    cout<<"revers number="<<rev;
    return 0;
}

