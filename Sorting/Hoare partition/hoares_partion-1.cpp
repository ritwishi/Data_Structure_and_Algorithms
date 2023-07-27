/* Hoares partition

i/p- arr[]={5,3,8,4,2,7,1,10} -------> pivot=5

o/p- {1,3,2,4,8,7,5,10}

*/

#include <bits/stdc++.h>
using namespace std;

int h_partition(int arr[], int l, int h)
{
    int pivot = arr[l];

    int i = l - 1, j = h + 1;

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

    cout << h_partition(arr, l, h) << endl;

    for (int x : arr)
    {
        cout << x << " ";
    }
}