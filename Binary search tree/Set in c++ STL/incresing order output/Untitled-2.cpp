#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(20);

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}