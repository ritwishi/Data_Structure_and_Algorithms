#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(20);

    if (s.count(10))
    {
        cout << "found" << endl;
    }

    else
    {
        cout << " not found " << endl;
    }

    return 0;
}