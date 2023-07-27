 /* Trap_water                        
                                      lmax=3
  i/p-arr[]={3,0,1,2,5}               rmax=5
  o/p- 6                              min(lmax,rmax)=3
                                water[i]=min(lmax,rmax)-arr[i]
*/

#include<bits/stdc++.h>
using namespace std;

int trap_water(int arr[],int n)
{
    int water=0;
    
    for(int i=1;i<n-1;i++)
    {
        int lmax=arr[i];

        for(int j=0;j<i;j++)
        {
            lmax=max(lmax,arr[j]);
        }

        int rmax=arr[i];
        for(int j=i+1;j<n;j++)
        {
            rmax=max(rmax,arr[j]);
        }

        water=water+(min(lmax,rmax)-arr[i]);
    }
    return water;

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

    cout<<trap_water(arr,n)<<endl;
    return 0;
}