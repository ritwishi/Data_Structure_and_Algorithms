#include <bits/stdc++.h>
using namespace std;

const int CHAR = 256;

int left_non_rep(string &s)
{
    int fi[CHAR];

    fill(fi, fi + CHAR, -1);

    for (int i = 0; i < s.length(); i++)
    {
        if (fi[s[i]] == -1)
        {
            fi[s[i]] = i;
        }

        else
        {
            fi[s[i]] = -2;
        }
    }

    int res = INT_MAX;

    for (int i = 0; i < CHAR; i++)
    {
        if (fi[i] > 0)
        {
            res = min(res, fi[i]);
        }
    }

    if (res == INT_MAX)
    {
        return -1;
    }

    else
    {
        return res;
    }
}

int main()
{
    string s;

    cin >> s;

    cout << left_non_rep(s) << endl;

    return 0;
}