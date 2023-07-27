#include <bits/stdc++.h>
using namespace std;

int dp[202][202][2];
int solve(string s, int i, int j, bool istrue)
{
    if (i > j)
        return false;
    if (dp[i][j][istrue] != -1)
        return dp[i][j][istrue];
    if (i == j)
    {
        if (istrue)
            return s[i] == 'T';
        else
            return s[i] == 'F';
    }

    int ans = 0;
    for (int k = i + 1; k < j; k += 2)
    {
        int lt = solve(s, i, k - 1, true);
        int lf = solve(s, i, k - 1, false);
        int rt = solve(s, k + 1, j, true);
        int rf = solve(s, k + 1, j, false);
        if (s[k] == '&')
        {
            if (istrue)
            {
                ans += lt * rt;
            }
            else
            {
                ans += lt * rf + lf * rt + lf * rf;
            }
        }
        else if (s[k] == '|')
        {
            if (istrue)
            {
                ans += lt * rf + lf * rt + lt * rt;
            }
            else
                ans += lf * rf;
        }
        else if (s[k] == '^')
        {
            if (istrue)
            {
                ans += lt * rf + lf * rt;
            }
            else
            {
                ans += lt * rt + lf * rf;
            }
        }
    }
    return dp[i][j][istrue] = ans % 1003;
}
int main()
{
    string s;
    cin >> s;

    memset(dp, -1, sizeof(dp));

    int n = s.length();

    cout << solve(s, 0, n - 1, 1);

    return 0;
}