#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    int temp[n];

    int low = 0;
    int high = n - 1;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            temp[i] = arr[high];
            high--;
        }

        else if (i % 2 != 0)
        {
            temp[i] = arr[low];
            low++;
        }

        if (high < low)
        {
            break;
        }
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

    rearrange(arr, n);

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}