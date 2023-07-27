// i/p~ arr[]-{7,10,4,3,6,5,2}     o/p~arr[]-{10,6,5,2}
#include<bits/stdc++.h>
using namespace std;

void leader_element(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=true;
        
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                flag= false;
                break;
            }
        }
        if(flag==true)
        {
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
   
   
   leader_element(arr,n);

   return 0;

}