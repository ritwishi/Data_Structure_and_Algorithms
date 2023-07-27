#include <bits/stdc++.h>
using namespace std;

bool anagram(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }

    sort(s1.begin(), s1.end());

    sort(s2.begin(), s2.end());

    if (s1 == s2)
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

    if (anagram(s1, s2) == true)
    {
        cout << "yes it is anagram" << endl;
    }

    else
    {
        cout << "no it is not anagram" << endl;
    }

    return 0;
}