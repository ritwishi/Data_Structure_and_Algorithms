/*  intersection two sorted array -----naive approach --> q(m + n)

i/p- arr[m]={3,5,10,10,15,15,20}   &  brr[n]={5,10,10,15,30}

o/p- {5,10,15}

*/

#include <bits/stdc++.h>
using namespace std;

void intersection(int arr[], int brr[], int m, int n)
{
    int i=0, j=0;

    while(i<m && j<n)
    {
        if(i>0 && arr[i]==arr[i-1])
        {
            i++;

            continue;
        }

        if(arr[i]<brr[j])
        {
            i++;
        }

        else if(arr[i]>brr[j])
        {
            j++;
        }

        else
        {
            cout<<arr[i]<<" ";

            i++;

            j++;
        }
    }
}

int main()
{
    int m;
    cin >> m;

    int arr[m];

    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    int n;
    cin >> n;

    int brr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }

    intersection(arr, brr, m, n);

    return 0;
}