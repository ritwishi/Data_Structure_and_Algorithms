// count one in sorted array
// i/p- arr[]={0,0,0,1,1,1,1}    o/p- 4

#include <bits/stdc++.h>
using namespace std;

int count_one(int arr[], int n)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == 0)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] == 0)
            {
                return n - mid;
            }

            else
            {
                high = mid - 1;
            }
        }
    }
    return 0;
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

    cout << count_one(arr, n) << endl;

    return 0;
}