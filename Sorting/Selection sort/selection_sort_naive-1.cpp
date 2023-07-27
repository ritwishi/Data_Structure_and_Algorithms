/* Seclection_sort

   i/p-arr[]={10,5,8,20,2,18}

   o/p-arr[]={2,5,8,10,18,20}

*/

#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
    int temp[n];

    for (int i = 0; i < n; i++)
    {
        int min_ind = 0;

        for (int j = 1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }
        temp[i] = arr[min_ind];
        arr[min_ind] = INT_MAX;
        min_ind=0;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
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

    selection_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}