//optimise rope cut
#include<bits/stdc++.h>
using namespace std;

int maxpiece(int n,int a,int b,int c)
{
    if(n==0)
    
    {
        return 0;
    }
    if(n<min(a,min(b,c)))
    {
        return -1;
    }
    if(n%2==1&&a%2==0&&b%2==0&&c%2==0)
    {
        return -1;
    }

    int res=max(maxpiece(n-a,a,b,c),max(maxpiece(n-b,a,b,c),maxpiece(n-c,a,b,c)));

    if(res==-1)
    {
        return -1;
    }
    return res+1;
}

int main()
{
    int num,x,y,z;
    cin>>num>>x>>y>>z;
    cout<<maxpiece(num,x,y,z)<<endl;
    return 0;
}