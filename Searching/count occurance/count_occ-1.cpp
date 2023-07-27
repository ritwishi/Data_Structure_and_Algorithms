// count the element in array
// i/p- arr[]={10,20,20,20,20,30,30} , x=20
// o/p- 4

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

int first_occ(int arr[], int n, int x)
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
            if (mid == 0 || arr[mid - 1] != arr[mid])
            {
                return mid;
            }

            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int count_occ(int arr[], int n, int x)
{
    int first = first_occ(arr, n, x);

    if (first == -1)
    {
        return 0;
    }

    else
    {
        return (last_occ(arr, n, x) - first + 1);
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

    cout << count_occ(arr, n, x) << endl;

    return 0;
}