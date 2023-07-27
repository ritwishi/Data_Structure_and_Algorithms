#include <bits/stdc++.h>
using namespace std;

struct my_stack
{
    int *arr;

    int cap;

    int top;

    my_stack(int cap)
    {
        this->cap = cap;

        this->arr = new int[cap];

        this->top = -1;
    }

    void push(int x)
    {
        if (top == cap - 1)
        {
            cout << "satck is full" << endl;
            return;
        }

        top++;

        arr[top] = x;
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;

            return INT_MIN;
        }

        int res = arr[top];

        top--;

        return res;
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;

            return INT_MIN;
        }

        return arr[top];
    }

    int size()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        return (top == -1);
    }
};

int main()
{
    my_stack s(5);

    s.push(5);

    s.push(10);

    s.push(20);

    cout << s.pop() << endl;

    cout << s.size() << endl;

    cout << s.peek() << endl;

    cout << s.isEmpty() << endl;

    return 0;
}