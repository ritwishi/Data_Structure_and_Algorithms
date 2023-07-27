#include <bits/stdc++.h>
using namespace std;

void print_search(string &txt, string &pat)
{
    int m = txt.length();

    int n = pat.length();

    for (int i = 0; i < (m - n); i++)
    {
        int j;

        for (j = 0; j < n; j++)
        {
            if (txt[i + j] != pat[j])
            {
                break;
            }
        }

        if (j == n)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    string txt;

    cin >> txt;

    string pat;

    cin >> pat;

    print_search(txt, pat);

    return 0;
}