#include<bits/stdc++.h>
using namespace std;
void left_rot_one(int arr[],int n)
{
  int temp;
  temp=arr[0];
  for(int i=1;i<n;i++)
  {
    arr[i-1]=arr[i];

  }
  arr[n-1]=temp;
   
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

    cout<<"before rotating by one place"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

     left_rot_one(arr,n);
     cout<<"after rotating by one place"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
