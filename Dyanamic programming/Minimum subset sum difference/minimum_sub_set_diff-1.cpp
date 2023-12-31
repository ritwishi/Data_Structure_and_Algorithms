#include <bits/stdc++.h>
using namespace std;

int minsubset(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    int t[n + 1][sum + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0)
            {
                t[i][j] = false;
            }

            if (j == 0)
            {
                t[i][j] = true;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= sum; j++)
            {
                if (arr[i - 1] <= j)
                {
                    t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
                }

                else
                {
                    t[i][j] = t[i - 1][j];
                }
            }
        }
    }

    int mn = INT_MAX;

    for (int j = 0; j < sum / 2 + 1; j++)
    {
        if (t[n][j] == true)
        {
            mn = min(mn, sum - 2 * j);
        }
    }

    return mn;
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

    cout << minsubset(arr, n) << endl;

    return 0;
}