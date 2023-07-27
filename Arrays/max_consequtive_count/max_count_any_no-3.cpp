/*
   max_consequtive_count
   
   i/p-arr[]={1,5,5,6,6,6,6,7,8}
   o/p- 4

*/

#include<bits/stdc++.h>
using namespace std;

int max_count(int arr[],int n)
{
    int res=0;
    int count=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        {
           count=1; 
            
        }
        else
        {
           count++;
            res=max(res,count);
              
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

    cout<< max_count(arr,n)<<endl;
    return 0;
}