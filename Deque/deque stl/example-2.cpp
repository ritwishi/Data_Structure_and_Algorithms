#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq = {10, 15, 30, 5, 12};

    for (auto x : dq)
    {
        cout << x << " ";
    }

    cout << endl;

    auto it = dq.begin();

    for (int i = 0; i < 2; i++)
    {
        it++;
    }

    dq.insert(it, 20);

    for (auto x : dq)
    {
        cout << x << " ";
    }

    cout << endl;

    dq.pop_front();
    dq.pop_back();

    for (auto x : dq)
    {
        cout << x << " ";
    }

    cout << endl;

    cout << dq.size() << endl;

    return 0;
}
