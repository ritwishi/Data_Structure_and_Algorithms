#include<bits/stdc++.h>
using namespace std;

int lrs(string x,string y,int n)
{
    int t[n+1][n+1];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            t[i][j]=0;
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(x[i-1]==y[j-1] && i!=j)
            {
                t[i][j]= 1+t[i-1][j-1];
            }

            else
            {
                t[i][j]= max(t[i-1][j],t[i][j-1]);
            }
        }
    }

    return t[n][n];
}

int main()
{
    string s;
    cin>>s;

    string x=s;
    string y=s;

    int n=s.length();

    cout<<lrs(x,y,n)<<endl;

    return 0;
}