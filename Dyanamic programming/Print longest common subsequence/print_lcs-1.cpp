#include <bits/stdc++.h>
using namespace std;

int t[1001][1001];

int lcs(string x, string y, int n, int m)
{
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
                t[i][j] = max(t[i][j - 1], t[i - 1][j]);
            }
        }
    }

    return t[n][m];
}

string lcsa(string x, string y, int n, int m)
{
    int ans = lcs(x, y, n, m);

    int i = n;
    int j = m;

    string s;

    while (i > 0 && j > 0)
    {
        if (x[i - 1] == y[j - 1])
        {
            s.push_back(x[i - 1]);

            i--;

            j--;
        }

        else
        {
            if (t[i][j - 1] > t[i - 1][j])
            {
                j--;
            }

            else
            {
                i--;
            }
        }
    }

    return s;
}

int main()
{
    string x;
    string y;

    cin >> x >> y;

    int n = x.length();
    int m = y.length();

    string ans = lcsa(x, y, n, m);

    reverse(ans.begin(), ans.end());

    cout << ans << endl;

    return 0;
}