#include <bits/stdc++.h>
using namespace std;

bool is_pal(string s)
{
    int begin = 0;

    int end = s.length() - 1;

    while (begin < end)
    {
        if (s[begin] != s[end])
        {
            return false;
        }

        begin++;

        end--;
    }

    return true;
}

int main()
{
    string str;

    cin >> str;

    if (is_pal(str) == true)
    {
        cout << str << " "
             << "is palindrome" << endl;
    }

    else
    {
        cout << str << " "
             << "not palindrome" << endl;
    }

    return 0;
}