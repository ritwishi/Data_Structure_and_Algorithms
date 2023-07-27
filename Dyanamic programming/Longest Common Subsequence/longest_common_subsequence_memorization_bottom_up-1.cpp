#include <bits/stdc++.h>
using namespace std;

int memo[1001][1001];

int lcs(string x, string y, int n, int m)
{
    if (memo[n][m] != -1)
    {
        return memo[n][m];
    }

    if (n == 0 || m == 0)
    {
        return 0;
    }

    if (x[n - 1] == y[m - 1])
    {
        return memo[n][m] = 1 + lcs(x, y, n - 1, m - 1);
    }

    else
    {
        return memo[n][m] = max(lcs(x, y, n - 1, m), lcs(x, y, n, m - 1));
    }

    return memo[n][m];
}

int main()
{
    string x;
    string y;

    cin >> x >> y;

    int n = x.length();

    int m = y.length();

    memset(memo, -1, sizeof(memo));

    cout << lcs(x, y, n, m) << endl;

    return 0;
}
