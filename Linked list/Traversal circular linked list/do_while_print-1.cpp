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
    if (head == NULL)
    {
        return;
    }

    node *curr = head;

    do
    {
        cout << curr->data << " ";

        curr = curr->next;

    } while (curr != head);
}

int main()
{
    node *head = new node(10);

    head->next = new node(5);

    head->next->next = new node(20);

    head->next->next->next = new node(30);

    head->next->next->next->next = head;

    print(head);

    return 0;
}