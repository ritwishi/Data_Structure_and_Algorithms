#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s, int i, int j)
{
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }

        i++;

        j--;
    }

    return true;
}

int solve(string s, int i, int j)
{
    if (i >= j)
    {
        return 0;
    }

    if (is_palindrome(s, i, j) == true)
    {
        return 0;
    }

    int mn = INT_MAX;

    for (int k = i; k <= j - 1; k++)
    {
        int temp_ans = 1 + solve(s, i, k) + solve(s, k + 1, j);

        if (temp_ans < mn)
        {
            mn = temp_ans;
        }
    }

    return mn;
}

int main()
{
    string str;
    cin >> str;

    cout << solve(str, 0, str.length() - 1);

    return 0;
}