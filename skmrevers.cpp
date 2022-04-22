#include<iostream>
using namespace std;
int main()
{
    int i,n,value;
    int rev=0,m=1,straight=0;
    cout<<"Enter the integer limit";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"Enter the value";
        cin>>value;
        rev = rev + m*value;
        straight=straight*10 + value;
        m=m*10;
    }
    cout<<straight<<endl;
    cout<< "rev="<<rev<<endl;
    return 0;
}