/* Merge sort

 using merge funtion
                                          left[m]={10,5,30}
                                        /
    i/p-arr[n1]={10,5,30,15,7}----
                                        \
                                          right[n]={15,7}


        o/p-arr[k]={5,7,10,15,30}
*/

#include <bits/stdc++.h>
using namespace std;

void merge_funtion(int arr[], int low, int mid, int high)
{
    int m = mid - low + 1;

    int n = high - mid;

    int left[m], right[n];

    for (int i = 0; i < m; i++)
    {
        left[i] = arr[low + i];
    }

    for (int j = 0; j < n; j++)
    {
        right[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = low;

    while (i < m && j < n)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];

            i++;

            k++;
        }

        else
        {
            arr[k] = right[j];

            j++;

            k++;
        }
    }

    while (i < m)
    {
        arr[k] = left[i];

        i++;

        k++;
    }

    while (j < n)
    {
        arr[k] = right[j];

        j++;

        k++;
    }
}

void merge_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;

        merge_sort(arr, low, mid);

        merge_sort(arr, mid + 1, high);

        merge_funtion(arr, low, mid, high);
    }
}

int main()
{
    int n1;
    cin >> n1;

    int arr[n1];

    for (int i = 0; i < n1; i++)
    {
        cin >> arr[i];
    }

    int low = 0, high = n1 - 1;

    merge_sort(arr, low, high);

    for (int x : arr)
        cout << x << " ";

    return 0;
}