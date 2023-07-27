#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;

    node *next;

    node(int data)
    {
        this->data = data;

        this->next = NULL;
    }
};

struct my_stack
{
    node *head;

    int sz;

    my_stack()
    {
        this->head = NULL;

        this->sz = 0;
    }

    void push(int x)
    {
        node *temp = new node(x);

        temp->next = head;

        head = temp;

        sz++;
    }

    int pop()
    {
        if (head == NULL)
        {
            cout << "stack is empty" << endl;

            return INT_MAX;
        }

        int res = head->data;

        node *temp = head;

        head = head->next;

        delete (temp);

        sz--;

        return res;
    }

    int peek()
    {
        if (head == NULL)
        {
            cout << "stack is empty" << endl;

            return INT_MAX;
        }

        return head->data;
    }

    int size()
    {
        return sz;
    }

    bool isEmpty()
    {
        return head == NULL;
    }
};

int main()
{
    my_stack s;

    s.push(5);
    s.push(10);
    s.push(20);
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;

    return 0;
}