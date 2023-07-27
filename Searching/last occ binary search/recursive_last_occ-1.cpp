// binary last occurance
// i/p-arr[]={5,10,10,10,10,20,20} , x=10
// o/p- 4

#include <bits/stdc++.h>
using namespace std;

int last_occ(int arr[], int low, int high, int n, int x)
{
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;

    if (arr[mid] > x)
    {
        return last_occ(arr, low, mid - 1, n, x);
    }

    else if (arr[mid] < x)
    {
        return last_occ(arr, mid + 1, high, n, x);
    }

    else
    {
        if (mid == n - 1 || arr[mid] != arr[mid + 1])
        {
            return mid;
        }
        else
        {
            return last_occ(arr, mid + 1, high, n, x);
        }
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

    int low = 0, high = n - 1;

    cout << last_occ(arr, low, high, n, x) << endl;

    return 0;
}