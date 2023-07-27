#include <bits/stdc++.h>
using namespace std;

int lcst(string x, string y, int n, int m)
{
    int t[n + 1][m + 1];

    int res = 0;

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

                res = max(res, t[i][j]);
            }

            else
            {
                t[i][j] = 0;
            }
        }
    }

    return res;
}

int main()
{
    string x;
    string y;

    cin >> x >> y;

    int n = x.length();
    int m = y.length();

    cout << lcst(x, y, n, m) << endl;

    return 0;
}