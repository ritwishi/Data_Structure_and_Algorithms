#include <bits/stdc++.h>
using namespace std;

void reverse_k_queue(queue<int> &q, int k)
{
    stack<int> s;

    for (int i = 0; i < k; i++)
    {
        s.push(q.front());

        q.pop();
    }

    queue<int> res;

    while (s.empty() == false)
    {
        res.push(s.top());

        s.pop();
    }

    while (q.empty() == false)
    {
        res.push(q.front());

        q.pop();
    }

    while (res.empty() == false)
    {
        cout << res.front() << " ";

        res.pop();
    }
}

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);

    int k;

    cin >> k;

    reverse_k_queue(q, k);
}