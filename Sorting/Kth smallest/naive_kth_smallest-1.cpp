/* Kth smallest element

i/p-arr[]={10,4,5,8,11,6,26} , k=5

o/p- 10  {4,5,6,8,10,11,26}

*/

#include<bits/stdc++.h>
using namespace std;

int kth_smallest(int arr[],int n,int k)
{
    sort(arr,arr+n);

    return arr[k-1];
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

    return 0;
}