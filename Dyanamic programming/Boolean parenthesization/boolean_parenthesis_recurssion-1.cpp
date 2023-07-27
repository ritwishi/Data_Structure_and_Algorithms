#include <bits/stdc++.h>
using namespace std;

int solve(string s, int i, int j, bool is_true)
{
    if (i > j)
    {
        return false;
    }

    if (i == j)
    {
        if (is_true == true)
        {
            return s[i] == 'T';
        }

        else
        {
            return s[i] == 'F';
        }
    }

    int ans = 0;

    for (int k = i + 1; k <= j - 1; k = k + 2)
    {
        int lt = solve(s, i, k - 1, true);

        int lf = solve(s, i, k - 1, false);

        int rt = solve(s, k + 1, j, true);

        int rf = solve(s, k + 1, j, false);

        if (s[k] == '&')
        {
            if (is_true == true)
            {
                ans = ans + (lt * rt);
            }

            else
            {
                ans = ans + (lf * rt) + (lf * rf) + (lt * rf);
            }
        }

        else if (s[k] == '|')
        {
            if (is_true == true)
            {
                ans = ans + (lf * rt) + (lt * rt) + (lt * rf);
            }

            else
            {
                ans = ans + (lf * rf);
            }
        }

        else if (s[k] == '^')
        {
            if (is_true == true)
            {
                ans = ans + (lf * rt) + (lt * rf);
            }

            else
            {
                ans = ans + (lf * rf) + (lt * rt);
            }
        }
    }

    return ans;
}

int main()
{
    string s;
    cin >> s;

    int n = s.length();

    cout << solve(s, 0, n - 1, 1);

    return 0;
}