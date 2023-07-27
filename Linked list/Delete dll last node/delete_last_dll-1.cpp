#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;

    node *prev;

    node *next;

    node(int data)
    {
        this->data = data;

        this->prev = NULL;

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

node *delete_dll_last(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = NULL;

    delete (temp->next);

    return head;
}

int main()
{
    node *head = new node(10);

    node *temp1 = new node(20);

    node *temp2 = new node(30);

    head->next = temp1;

    temp1->prev = head;

    temp1->next = temp2;

    temp2->prev = temp1;

    print(head);

    cout << endl;

    head = delete_dll_last(head);

    print(head);
}