/* Median of two sorted array

i/p- arr1[]={30,40,50,60} ,n1=4
     arr2[]={5,6,7,8,9}   ,n2=5

o/p- 9

*/

#include <bits/stdc++.h>
using namespace std;

double get_med(int arr1[],int arr2[],int n1,int n2)
{
    int x=0;
    int y=0;
    int i=0;

    int temp[n1+n2];

    while(x!=n1 && y!=n2)
    {
        if(arr1[x]<arr2[y])
        {
            temp[i]=arr1[x];
            i++;
            x++;
        }

        if(arr1[x]>arr2[y])
        {
            temp[i]=arr2[y];
            i++;
            y++;
        }

        if(arr1[x]==arr2[y])
        {
            temp[i]=arr1[x];
            i++;
            x++;
            temp[i]=arr2[y];
            i++;
            y++;
        }
    }

    if(x==n1)
    {
        while(y!=(n2))
        {
            temp[i]=arr2[y];
            y++;
            i++;
        }
    }

    if(y==n2)
    {
        while(x!=(n1))
        {
            temp[i]=arr1[x];
            x++;
            i++;
        }
    }

    for(int i=0;i<(n1+n2);i++)
    {
        cout<<temp[i]<<" ";
    }

    cout<<endl;

    if((n1+n2)%2!=0)
    {
        int ans=(double)temp[(n1+n2)/2];
        return ans;
    }

    if((n1+n2)%2==0)
    {
        int ans1=temp[(n1+n2)/2];
        int ans2=temp[(n1+n2)/2-1];

        int ans=(double)(ans1+ans2)/2;
        return ans;
    }

    
}

int main()
{
    int n1;
    cin >> n1;

    int arr1[n1];

    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    int n2;
    cin >> n2;

    int arr2[n2];

    for (int j = 0; j < n2; j++)
    {
        cin >> arr2[j];
    }

    cout << get_med(arr1, arr2, n1, n2) << endl;

    return 0;
}