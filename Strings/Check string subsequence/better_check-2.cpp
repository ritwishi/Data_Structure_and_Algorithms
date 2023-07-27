#include <bits/stdc++.h>
using namespace std;

bool check_sub(string s1, string s2)
{
    int i = 0, j = 0;

    if (s1.length() < s2.length())
    {
        return false;
    }

    while (i < s1.length() && j < s2.length())
    {
        if (s1[i] == s2[j])
        {
            i++;
            j++;
        }

        else
        {
            i++;
        }
    }

    if (j == s2.length())
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{
    string s1;

    cin >> s1;

    string s2;

    cin >> s2;

    if (check_sub(s1, s2) == true)
    {
        cout << "yes" << endl;
    }

    else
    {
        cout << "no" << endl;
    }

    return 0;
}