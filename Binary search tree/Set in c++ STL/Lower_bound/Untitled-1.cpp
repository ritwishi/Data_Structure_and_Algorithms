#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(20);

    auto it = s.lower_bound(6);

    if (it != s.end())
    {
        cout << *it << endl;
    }

    else
    {
        cout << "given no is greater than largest" << endl;
    }

    return 0;
}