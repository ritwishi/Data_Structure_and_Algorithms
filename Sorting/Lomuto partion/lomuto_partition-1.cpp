/* Lomuto partition

i/p-arr[]={10,80,30,90,40,50,70}  ,  pivot= 70-----> p=6

o/p- {10,30,40,50,70,80,90}

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

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0;

    int h = n - 1;

    cout << l_partition(arr, l, h) << endl;

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}