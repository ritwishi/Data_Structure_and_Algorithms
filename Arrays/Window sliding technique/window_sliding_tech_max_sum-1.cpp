#include <bits/stdc++.h>
using namespace std;

int max_sum(int arr[], int n, int k)
{
    int curr = 0;

    for (int i = 0; i < k; i++)
    {
        curr = curr + arr[i];
    }

    int res = curr;

    for (int i = k; i < n; i++)
    {
        curr = curr + arr[i] - arr[i - k];

        res = max(curr, res);
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

    int k;
    cin >> k;

    cout << max_sum(arr, n, k) << endl;

    return 0;
}