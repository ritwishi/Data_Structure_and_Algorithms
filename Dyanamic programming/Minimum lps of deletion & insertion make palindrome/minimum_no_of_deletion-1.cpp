#include <bits/stdc++.h>
using namespace std;

int lps(string x, string y, int n)
{
    int t[n + 1][n + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
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

    return t[n][n];
}

int main()
{
    string s;

    cin >> s;

    string x = s;

    reverse(s.begin(), s.end());

    string y = s;

    int n = s.length();

    int ans = lps(x, y, n);

    cout << "no of deletion or insertion is"
         << " " << n - ans << endl;

    return 0;
}