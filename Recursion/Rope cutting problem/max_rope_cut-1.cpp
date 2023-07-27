// max rope cut
#include<bits/stdc++.h>
using namespace std;

int maxPiece(int n,int a,int b,int c)
{
    if(n==0)
    {
        return 0;
    }
    if(n<0)
    {
        return -1;
    }

    int res=max(maxPiece(n-a,a,b,c),max(maxPiece(n-b,a,b,c),maxPiece(n-c,a,b,c)));
    
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
    cout<<maxPiece(num,x,y,z)<<endl;
    return 0;
}