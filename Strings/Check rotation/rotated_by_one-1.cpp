#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;

    cin >> s1;

    for (int i = 0; i < s1.length() - 1; i++)
    {
        swap(s1[i], s1[i + 1]);
    }

    cout << s1 << endl;
}