#include <bits/stdc++.h>
using namespace std;

int t[1001][1001];

int knapsack(int wt[], int val[], int w, int n)
{
    if (t[n][w] != -1)
    {
        return t[n][w];
    }

    if (n == 0 || w == 0)
    {
        return 0;
    }

    if (wt[n - 1] <= w)
    {
        return t[n][w] = max(val[n - 1] + knapsack(wt, val, w - wt[n - 1], n - 1), knapsack(wt, val, w, n - 1));
    }

    else if (wt[n - 1] > w)
    {
        return t[n][w] = knapsack(wt, val, w, n - 1);
    }

    return t[n][w];
}

int main()
{
    int n;

    cin >> n;

    int wt[n];

    int val[n];

    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }

    for (int j = 0; j < n; j++)
    {
        cin >> val[j];
    }

    int w;
    cin >> w;

    memset(t, -1, sizeof(t));

    cout << knapsack(wt, val, w, n) << endl;

    return 0;
}