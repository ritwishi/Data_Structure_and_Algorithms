//move zero to end
// i/p:arr[]={8,5,0,10,0,20}       o/p:arr[]={8,5,10,20,_,_}


#include<bits/stdc++.h>
using namespace std;
void movetozero(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]!=0)
                {
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
}

int main()
{
     int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "before reverse" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    movetozero(arr, n);

    cout << "after reverse" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
    
}