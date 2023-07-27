/* Quick sort using hoares partition (tail recursion )

i/p-arr[]={8,4,7,9,3,10,5}

o/p- {3,4,5,7,8,9,10}

*/

#include <bits/stdc++.h>
using namespace std;

int h_partition(int arr[], int l, int h)
{
    int pivot = arr[l];

    int i = l - 1;

    int j = h + 1;

    while (true)
    {
        do
        {
            i++;
        }

        while (arr[i] < pivot);

        do
        {
            j--;
        }

        while (arr[j] > pivot);

        if (i >= j)
        {
            return j;
        }

        swap(arr[i], arr[j]);
    }
}

void q_sort(int arr[], int l, int h)
{
Begin:

    if (l < h)
    {
        int p = h_partition(arr, l, h);

        q_sort(arr, l, p);

        l = p + 1;

        goto Begin;
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