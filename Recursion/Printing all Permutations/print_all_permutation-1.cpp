#include <bits/stdc++.h>
using namespace std;

void permute(string str, int l, int n)
{
    if (l == n - 1)
    {
        cout << str << endl;

        return;
    }

    for (int i = l; i < n; i++)
    {
        swap(str[i], str[l]);

        permute(str, l + 1, n);

        swap(str[i], str[l]);
    }
}

int main()
{
    string str;

    cin >> str;

    int n = str.length();

    permute(str, 0, n);

    return 0;
}