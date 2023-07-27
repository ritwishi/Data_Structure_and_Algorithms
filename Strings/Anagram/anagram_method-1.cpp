#include <bits/stdc++.h>
using namespace std;

bool anagram(string s1, string s2)
{
    int count1[26] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        count1[s1[i] - 'a']++;
    }

    int count2[26] = {0};

    for (int i = 0; i < s2.length(); i++)
    {
        count2[s2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            return false;
        }
    }

    return true;
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