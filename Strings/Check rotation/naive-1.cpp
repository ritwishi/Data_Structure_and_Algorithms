#include <bits/stdc++.h>
using namespace std;

string rotation(string &s1)
{
    for (int i = 0; i < s1.length() - 1; i++)
    {
        swap(s1[i], s1[i + 1]);
    }

    return s1;
}

bool check_rotation(string &s1, string &s2)
{
    for (int i = 0; i < s1.length(); i++)
    {
        s1 = rotation(s1);

        if (s1 == s2)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    string s1;

    cin >> s1;

    string s2;

    cin >> s2;

    if (check_rotation(s1, s2))
    {
        cout << "yes" << endl;
    }

    else
    {
        cout << "no" << endl;
    }

    return 0;
}