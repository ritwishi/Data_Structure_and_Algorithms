#include <bits/stdc++.h>
using namespace std;

int largest_area(int arr[], int n)
{
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];

        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] >= arr[i])
            {
                curr = curr + arr[i];
            }

            else
            {
                break;
            }
        }

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] >= arr[i])
            {
                curr = curr + arr[i];
            }

            else
            {
                break;
            }
        }

        res = max(res, curr);
    }

    return res;
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

    cout << largest_area(arr, n) << endl;

    return 0;
}