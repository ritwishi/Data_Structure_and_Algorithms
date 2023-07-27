// binary first occurance
// i/p- arr[]={5,10,10,15,20,20,20}, x=20
// o/p- 4

#include <bits/stdc++.h>
using namespace std;

int first_occ(int arr[], int low, int high, int x)
{
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;

    if (arr[mid] > x)
    {
        return first_occ(arr, low, mid - 1, x);
    }

    else if (arr[mid] < x)
    {
        return first_occ(arr, mid + 1, high, x);
    }

    else
    {
        if (mid == 0 || arr[mid - 1] != arr[mid])
        {
            return mid;
        }
        else
        {
            return first_occ(arr, low, mid - 1, x);
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

    cout << first_occ(arr, low, high, x) << endl;

    return 0;
}