#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.size() << endl;

    cout << s.top() << endl;

    s.pop();

    cout << s.size() << endl;

    cout << s.top() << endl;

    s.push(30);

    while (s.empty() == false)
    {
        cout << s.top() << " ";

        s.pop();
    }

    return 0;
}