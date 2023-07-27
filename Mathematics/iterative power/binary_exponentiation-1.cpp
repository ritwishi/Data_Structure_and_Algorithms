#include<bits/stdc++.h>
using namespace std;

long power(int x,int n)
{
    long res=1;
    while(n>0)
    {
        if(n%2!=0)
        {
            res=res*x;
        }
        x=x*x;
        n=n/2;
    }
    return res;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
    return 0;

}