#include <bits/stdc++.h>
using namespace std;

bool check_sub(string s1, string s2)
{
    int i = 0, j = 0;

    string rep;

    while (i < s1.length() && j < s2.length())
    {
        if (s1[i] == s2[j])
        {
            rep.push_back(s1[i]);
            i++;
            j++;
        }

        else
        {
            i++;
        }
    }

    if (s2 == rep)
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