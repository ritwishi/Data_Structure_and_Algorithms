#include <bits/stdc++.h>
using namespace std;

void print(queue<int> &q)
{
    while (q.empty() == false)
    {
        cout << q.front() << " ";

        q.pop();
    }
}

void reverse_queue(queue<int> &q)
{
    stack<int> s;

    while (q.empty() == false)
    {
        s.push(q.front());

        q.pop();
    }

    while (s.empty() == false)
    {
        q.push(s.top());

        s.pop();
    }
}

int main()
{
    queue<int> q;

    q.push(10);
    q.push(5);
    q.push(15);
    q.push(20);

    reverse_queue(q);

    print(q);
}