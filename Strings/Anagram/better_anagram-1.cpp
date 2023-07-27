#include <bits/stdc++.h>
using namespace std;

const int CHAR=256;

bool anagram(string s1, string s2)
{
    if(s1.length()!=s2.length())
    {
        return false;
    } 

    int count[CHAR]={0};

    for(int i=0;i<s1.length();i++)
    {
        count[s1[i]]++;

        count[s2[i]]--;
    }

    for(int i=0;i<CHAR;i++)
    {
        if(count[i]!=0)
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