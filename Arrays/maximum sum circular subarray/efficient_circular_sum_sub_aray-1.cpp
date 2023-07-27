#include <bits/stdc++.h>
using namespace std;

int max_sum(int arr[], int n)
{
    int res = arr[0];
    int max_ending = arr[0];

    for (int i = 1; i < n; i++)
    {
        max_ending = max(max_ending + arr[i], arr[i]);

        res = max(res, max_ending);
    }
    return res;
}

int overall_max_circular_sum(int arr[], int n)
{
    int max_normal = max_sum(arr, n);

    if (max_normal < 0)
    {
        return max_normal;
    }

    int arr_sum = 0;

    for (int i = 0; i < n; i++)
    {
        arr_sum = arr_sum + arr[i];

        arr[i] = -arr[i];
    }

    int max_circular = arr_sum + max_sum(arr, n);

    return max(max_normal, max_circular);
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
    cout << overall_max_circular_sum(arr, n) << endl;

    return 0;
}