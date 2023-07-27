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
    if (q.empty())
    {
        return;
    }

    int x = q.front();

    q.pop();

    reverse_queue(q);

    q.push(x);
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