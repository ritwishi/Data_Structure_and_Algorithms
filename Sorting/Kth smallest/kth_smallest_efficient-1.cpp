/* Kth smallest element

i/p-arr[]={10,4,5,8,11,6,26} , k=5

o/p- 10  {4,5,6,8,10,11,26}

*/

#include<bits/stdc++.h>
using namespace std;

int l_partition(int arr[],int l,int h)
{
    int pivot=arr[h];

    int i=l-1;

    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;

            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[h]);

    return i+1;
}

int kth_smallest(int arr[],int n,int k)
{
    int l=0, r=n-1;

    while(l<=r)
    {
        int p=l_partition(arr,l,r);  //lomuto partition

        if(p==k-1)
        {
            return arr[p];
        }

        else if(p>k-1)
        {
            r=p-1;
        }

        else
        {
            l=p+1;
        }
    }

    return -1;
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

    int k;

    cin>>k;

    cout<<kth_smallest(arr,n,k)<<endl;

    for(int x: arr)
    {
        cout<<x<<" ";
    }

    return 0;
}