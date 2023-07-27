// count one in sorted array
// i/p- arr[]={0,0,0,1,1,1,1}    o/p- 4

#include <bits/stdc++.h>
using namespace std;

int last_occ(int arr[], int n, int x)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] > x)
        {
            high = mid - 1;
        }

        else if (arr[mid] < x)
        {
            low = mid + 1;
        }

        else
        {
            if (mid == n - 1 || arr[mid] != arr[mid + 1])
            {
                return mid;
            }

            else
            {
                low = mid + 1;
            }
        }
    }
    return -1;
}

int count_one(int arr[], int n, int x)
{
    int last_zero = last_occ(arr, n, x);

    if (last_zero == -1)
    {
        return n;
    }

    else if (last_zero == n - 1)
    {
        return 0;
    }

    else
    {
        return n - (last_zero + 1);
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

    int x;
    cin >> x;

    cout << count_one(arr, n, x) << endl;

    return 0;
}