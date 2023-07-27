#include <bits/stdc++.h>
using namespace std;

int lcs(string x, string y, int n, int m)
{
    int t[n + 1][m + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
            {
                t[i][j] = 0;
            }

            else if (x[i - 1] == y[j - 1])
            {
                t[i][j] = 1 + t[i - 1][j - 1];
            }

            else
            {
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
    }

    return t[n][m];
}

int main()
{
    string x;
    string y;

    cin >> x >> y;

    int n = x.length();
    int m = y.length();

    int ans = lcs(x, y, n, m);

    int del = n - ans;

    cout << "deltion"
         << " " << del << endl;

    int ins = m - ans;

    cout << "insetion"
         << " " << ins << endl;

    return 0;
}