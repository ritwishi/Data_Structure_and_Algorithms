#include<bits/stdc++.h>
using namespace std;

int count_subset(int arr[],int sum1,int n)
{
    int t[n+1][sum1+1];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum1;j++)
        {
            if(i==0)
            {
                t[i][j]=0;
            }

            if(j==0)
            {
                t[i][j]=1;
            }
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum1;j++)
        {
            if(arr[i-1]<=j)
            {
                t[i][j]=t[i-1][j-arr[i-1]]+t[i-1][j];
            }

            else
            {
                t[i][j]=t[i-1][j];
            }
        }
    }

    return t[n][sum1];
}

int count_target(int arr[],int target,int n)
{
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }

    int sum1=(target+sum)/2;

    return count_subset(arr,sum1,n);
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int target;
    cin>>target;

    cout<<count_target(arr,target,n)<<endl;

    return 0;
}