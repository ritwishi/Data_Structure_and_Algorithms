/* search in sorted  rotated array

i/p- arr[]={10,20,40,60,5,8}  , x=5

o/p- 4

*/

#include <bits/stdc++.h>
using namespace std;

int rotate_search(int arr[], int n, int x)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }

        else if (arr[low] < arr[mid])
        {
            if (arr[low] <= x && x < arr[mid])
            {
                high = mid - 1;
            }

            else
            {
                low = mid + 1;
            }
        }

        else
        {
            if (arr[mid] < x && x <= arr[high])
            {
                low = mid + 1;
            }

            else
            {
                high = mid - 1;
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

    cout << rotate_search(arr, n, x) << endl;

    return 0;
}