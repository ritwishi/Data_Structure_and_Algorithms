//PRINT DIVISIOR ARRANGED MANNER

#include<bits/stdc++.h>
using namespace std;

void print_divisor(int n)
{
    int i=1;
    for( i=1;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
    for(;i>=1;i--)
    {
       if(n%i==0)
       {
            cout<<n/i<<" ";
       }
    }
}

int main()
{
    int num;
    cin>>num;
    print_divisor(num);
    return 0;
}