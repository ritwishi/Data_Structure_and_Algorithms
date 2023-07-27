/* Merge two funtion
                                          left[m]={10,15,20,40}
                                        /
    i/p-arr[n1]={10,15,20,40,8,11,55}----
                                        \
                                          right[n]={8,11,55}


        o/p-arr[k]={8,10,11,15,20,40,55}
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

    int i = 0, j = 0, k = 0;

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

int main()
{
    int n1;
    cin >> n1;

    int arr[n1];

    for (int i = 0; i < n1; i++)
    {
        cin >> arr[i];
    }

    int low = 0;
    int high = n1 - 1;
    int mid = (low + high) / 2;

    merge_funtion(arr, low, mid, high);

    for (int x: arr)
    {
        cout << x << " ";
    }

    return 0;
}