#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(37);
    s.insert(21);
    s.insert(43);
    s.insert(47);
    s.insert(69);

    for (int x : s)
    {
        cout << x << " ";
    }

    cout << endl;

    auto it = s.find(43);

    s.erase(it, s.end());

    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}