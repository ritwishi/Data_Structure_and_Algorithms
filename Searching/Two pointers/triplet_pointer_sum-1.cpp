#include<bits/stdc++.h>
using namespace std;

bool is_pair(int arr[],int left,int right,int sum)
{
    

    while(left<right)
    {
        

        if((arr[left]+arr[right])==sum)
        {
            return true;
        }

        else if((arr[left]+arr[right])>sum)
        {
          right--;
        }

        else
        {
            left++;
        }
    }

    return false;
    
}


bool is_triplet(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(is_pair(arr,i+1,n-1,x-arr[i]))
        {
            return true;
        }
    }
    return false;
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

    int x;
    cin>>x;

    if(is_triplet(arr,n,x))
    {
        cout<<"Yes"<<endl;
    }

    else
    {
         cout<<"No"<<endl;
    }

    return 0;
}