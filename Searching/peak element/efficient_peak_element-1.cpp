/* Find peak element effecient solution
                                               arr[mid]>arr[mid-1]---left side(peak element)
i/p- arr[]={5,20,15,30,20,50,60}               
                                                arr[mid]<arr[mid+1]---right side(peak element)
o/p-  30

*/
#include<bits/stdc++.h>
using namespace std;

int peak_element(int arr[],int n)
{
    int low=0, high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if((mid==0 || arr[mid]>=arr[mid-1]) && (mid==n-1 || arr[mid]>=arr[mid+1]))
        {
            return arr[mid];
        }

        else if(mid>0 || arr[mid-1]>=arr[mid] )
        {
            high=mid-1;
        }

        else
        {
            low= mid+1;
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

    cout<<peak_element(arr,n)<<endl;

    return 0;

}