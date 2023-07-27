//second largest element 
// i/p~ arr[4]=={5,10,8,12}
//o/p~ 1
#include<bits/stdc++.h>
using namespace std;

int max_ele(int arr[],int n)
{
    int max=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[max])
        {
            max=i;
        }
    }
    return max;
}

int second_ele_idx(int arr[],int n)
{
    int largest= max_ele(arr,n);
    
    int scnd_max=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != arr[largest])
        {
        
          if(arr[i]>arr[scnd_max])
            {
                scnd_max=i;
            }

        }
    }
    return scnd_max;

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

    cout<<second_ele_idx(arr,n)<<endl;
    return 0;
}