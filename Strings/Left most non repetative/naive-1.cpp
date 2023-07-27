#include <bits/stdc++.h>
using namespace std;

int left_non_rep(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        bool flag = false;

        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                flag = true;

                break;
            }
        }

        if (flag == false)
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

    cout << left_non_rep(s) << endl;

    return 0;
}