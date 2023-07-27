/*
   max_consequtive_one

   i/p-arr[]={1,0,1,1,1,1,0,1,1}
   o/p- 4

*/

#include<bits/stdc++.h>
using namespace std;

int max_count_one(int arr[],int n)
{
    int res=0;
    int count=0;
    
    for(int i=0;i<n;i++)
    {
      if(arr[i]==1)
      {
        count++;

        res=max(res,count);
      }
      else
         {
            count=0;
         }
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
    
    cout<<max_count_one(arr,n)<<endl;

    return 0;

}