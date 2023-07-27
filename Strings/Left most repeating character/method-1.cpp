#include <bits/stdc++.h>
using namespace std;

int left_most(string s)
{
    int begin = 0;

    int end = s.length() - 1;

    while (begin < end)
    {
        if (s[begin] == s[end])
        {
            return begin;
        }

        else if (end == begin + 1)
        {
            begin++;

            end = s.length() - 1;
        }

        else
        {
            end--;
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