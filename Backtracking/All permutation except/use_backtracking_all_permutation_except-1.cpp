#include <bits/stdc++.h>
using namespace std;

bool isSafe(string str, int l, int i, int r)
{
    if (l != 0 && str[l - 1] == 'A' && str[i] == 'B')
    {
        return false;
    }

    if (r == (l + 2) && str[i] == 'A' && str[l] == 'B')
    {
        return false;
    }

    return true;
}

void permute(string str, int l, int r)
{

    if (l == r - 1)
    {
        cout << str << " ";

        return;
    }
    else
    {
        for (int i = l; i < r; i++)
        {
            if (isSafe(str, l, i, r))
            {
                swap(str[i], str[l]);

                permute(str, l + 1, r);

                swap(str[i], str[l]);
            }
        }
    }
}

int main()
{

    string str;

    cin >> str;

    int r = str.length();

    permute(str, 0, r);

    return 0;
}