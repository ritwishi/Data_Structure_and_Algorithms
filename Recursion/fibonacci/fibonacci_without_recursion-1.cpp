//fibonacci without recursion
#include<bits/stdc++.h>
using namespace  std;

int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    int x=0,y=1,z=0;

        for(int i=1;i<=n;i++)
        {
            x=y;
            y=z;
            z=x+y;
        }
    
    return z;
}

int main()
{
    int num;
    cin>>num;
    cout<<fib(num)<<endl;
}