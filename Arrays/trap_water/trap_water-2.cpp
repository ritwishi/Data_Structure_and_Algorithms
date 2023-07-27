/*
  trap_water problem- Q(n) time complexity

  i/p-arr[]={5,0,6,2,3}
   
  o/p- 6

*/
#include<bits/stdc++.h>
using namespace std;

int get_water(int arr[],int n)                   //arr[]={5,0,6,2,3}
{
    int res=0;
    
    int lmax[n],rmax[n];

    lmax[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        lmax[i]=max(arr[i],lmax[i-1]);          //lmax[]={5,5,6,6,6}
    }

    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rmax[i]=max(arr[i],rmax[i+1]);          //rmax[]={6,6,6,3,3}
    }

    for(int i=1;i<n-1;i++)
    {
        res=res+min(lmax[i],rmax[i])-arr[i];
    }

    return res;

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
    
    cout<<get_water(arr,n)<<endl;
    return 0;

}