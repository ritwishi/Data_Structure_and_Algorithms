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

void rec_print(node *head)
{
    if (head == NULL)
    {
        return;
    }

    cout << head->data << "-->";

    rec_print(head->next);
}

int main()
{
    node *head = new node(10);

    head->next = new node(20);

    head->next->next = new node(30);

    head->next->next->next = new node(40);

    rec_print(head);

    return 0;
}