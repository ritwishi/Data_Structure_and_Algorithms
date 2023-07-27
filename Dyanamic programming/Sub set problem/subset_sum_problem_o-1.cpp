#include <bits/stdc++.h>
using namespace std;

int knapsack(int arr[], int sum, int n)
{
    int t[n + 1][sum + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0 || j == 0)
            {
                t[i][j] = 0;
            }

            else if (arr[i - 1] <= j)
            {
                t[i][j] = max(arr[i - 1] + t[i - 1][j - arr[i - 1]], t[i - 1][j]);
            }

            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }

    return t[n][sum];
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

    int sum;
    cin >> sum;

    int ans = knapsack(arr, sum, n);

    if (ans == sum)
    {
        cout << "yes" << endl;
    }

    else
    {
        cout << "no" << endl;
    }

    return 0;
}