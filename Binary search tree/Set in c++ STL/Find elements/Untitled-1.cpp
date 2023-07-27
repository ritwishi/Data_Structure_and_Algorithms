#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(20);

    auto it = s.find(10);

    if (it == s.end())
    {
        cout << "not found" << endl;
    }

    else
    {
        cout << "found" << endl;

        s.clear();

        cout << s.size() << endl;
    }
}