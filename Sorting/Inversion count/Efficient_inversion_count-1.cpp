/* Count inversion in an array

   i/p-arr[n1]={2,4,1,3,5}

   o/p- 3    pairs{(2,1),(4,1),(4,3)}

*/
#include <bits/stdc++.h>
using namespace std;

int count_merge_funtion(int arr[], int low, int mid, int high)
{
    int m = mid - low + 1; // m= 2-0+1----->3

    int n = high - mid; //  n= 4-2------>2

    int left[m], right[n];

    for (int i = 0; i < m; i++)
    {
        left[i] = arr[low + i]; // left[m]={2,4,1}
    }

    for (int j = 0; j < n; j++)
    {
        right[j] = arr[mid + 1 + j]; // right[n]={3,5}
    }

    int count = 0, i = 0, j = 0, k = low;

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

            count = count + (m - i);
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

    return count;
}

int count_inv(int arr[], int low, int high)
{
    int count = 0;

    int mid = low + (high - low) / 2;

    if (low < high)
    {
        count = count + count_inv(arr, low, mid);

        count = count + count_inv(arr, mid + 1, high);

        count = count + count_merge_funtion(arr, low, mid, high);
    }

    return count;
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

    cout << count_inv(arr, low, high) << endl;

    return 0;
}
