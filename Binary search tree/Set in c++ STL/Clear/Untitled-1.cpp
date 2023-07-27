#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(20);

    cout << s.size() << endl;

    s.clear();

    cout << s.size() << endl;

    return 0;
}