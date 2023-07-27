#include <bits/stdc++.h>
using namespace std;

void reverse(string &s, int low, int high)
{
    while (low < high)
    {
        swap(s[low], s[high]);

        low++;

        high--;
    }
}

void reverse_words(string &s, int n)
{
    int start = 0;

    for (int end = 0; end < n; end++)
    {
        if (s[end] == ' ')
        {
            reverse(s, start, end - 1);

            start = end + 1;
        }
    }

    reverse(s, start, n - 1);

    reverse(s, 0, n - 1);
}

int main()
{
    string s;

    getline(cin, s);

    int n = s.length();

    reverse_words(s, n);

    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }

    return 0;
}