#include<bits/stdc++.h>
using namespace std;
void left_rot_one(int arr[],int n)
{
  int i=0;
  while(i<n-1)
  {
    swap(arr[i],arr[i+1]);
    i++;
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