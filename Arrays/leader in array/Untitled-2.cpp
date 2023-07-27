// i/p~ arr[]-{7,10,4,3,6,5,2}     o/p~arr[]-{10,6,5,2}
#include<bits/stdc++.h>
using namespace std;

void leader(int arr[],int n)
{
    int curr_ledr=arr[n-1];

    cout<<curr_ledr<<" ";

    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>curr_ledr)
        {
            curr_ledr=arr[i];
            cout<<arr[i]<<" ";
        }
    }
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
    leader(arr,n);
    
    return 0;
}