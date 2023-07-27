// binary last occurance
// i/p-arr[]={5,10,10,10,10,20,20} , x=10
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

    cout << last_occ(arr, n, x) << endl;

    return 0;
}