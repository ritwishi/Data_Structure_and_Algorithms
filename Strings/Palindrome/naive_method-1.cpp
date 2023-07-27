#include <bits/stdc++.h>
using namespace std;

bool is_pal(string str)
{
    string rev = str;

    reverse(rev.begin(), rev.end());

    if (rev == str)
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