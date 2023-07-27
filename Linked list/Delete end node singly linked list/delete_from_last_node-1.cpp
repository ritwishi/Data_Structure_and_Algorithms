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

void print(node *head)
{
    node *curr = head;

    while (curr != NULL)
    {
        cout << curr->data << " ";

        curr = curr->next;
    }
}

node *delete_tail(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (head->next == NULL)
    {
        delete (head);

        return NULL;
    }

    node *curr = head;

    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }

    delete (curr->next);

    curr->next = NULL;

    return head;
}

int main()
{
    node *head = new node(10);

    head->next = new node(20);

    head->next->next = new node(30);

    head->next->next->next = new node(40);

    print(head);

    cout << endl;

    head = delete_tail(head);

    print(head);

    return 0;
}