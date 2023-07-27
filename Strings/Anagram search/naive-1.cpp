#include <bits/stdc++.h>
using namespace std;

bool anagram(string &s1, string &s2, int i)
{
    int count[26] = {0};

    for (int j = 0; j < s2.length(); j++)
    {
        count[s2[j] - 'a']++;

        count[s1[i + j] - 'a']--;
    }

    for (int k = 0; k < 26; k++)
    {
        if (count[k] != 0)
        {
            return false;
        }
    }

    return true;
}

bool anagram_search(string &s1, string &s2)
{
    int m = s1.length();

    int n = s2.length();

    for (int i = 0; i < (m - n); i++)
    {
        if (anagram(s1, s2, i))
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

    if (anagram_search(s1, s2) == true)
    {
        cout << "yesssss" << endl;
    }

    else
    {
        cout << "noooooo" << endl;
    }

    return 0;
}