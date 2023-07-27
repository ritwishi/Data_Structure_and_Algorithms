#include <bits/stdc++.h>
using namespace std;

int left_most(string s)
{
    int count[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        count[s[i] - 'a']++;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (count[s[i] - 'a'] > 1)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string s;

    cin >> s;

    cout << left_most(s) << endl;

    return 0;
}