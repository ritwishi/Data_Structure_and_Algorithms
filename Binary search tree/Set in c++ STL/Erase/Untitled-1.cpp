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

    s.erase(43);

    for (int x : s)
    {
        cout << x << " ";
    }

    return 0;
}