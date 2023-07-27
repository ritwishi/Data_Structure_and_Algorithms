/*
Maximum difference
i/p- arr[]-{2,3,10,6,4,8,1}      o/p- 8



*/
#include<bits/stdc++.h>
using namespace std;

void maximum_difference(int arr[],int n)
{
    int res=arr[1]-arr[0];

    int mini=arr[0];

    for(int i=1;i<n;i++)
    {
        res=max(res,arr[i]-mini);

        mini=min(mini,arr[i]);
    }

    cout<<res<<endl;
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

    maximum_difference(arr,n);
    return 0;
}