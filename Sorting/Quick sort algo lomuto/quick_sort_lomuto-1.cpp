/* Quick sort algorithm using lomuto partition

i/p-arr[]={8,4,7,9,3,10,5}

o/p- {3,4,5,7,8,9,10}

*/

#include <bits/stdc++.h>
using namespace std;

int l_partition(int arr[], int l, int h)
{
    int pivot = arr[h];

    int i = l - 1;

    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;

            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[h]);

    return (i + 1);
}

void q_sort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = l_partition(arr, l, h);

        q_sort(arr, l, p - 1);

        q_sort(arr, p + 1, h);
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

    int l = 0, h = n - 1;

    q_sort(arr, l, h);

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}