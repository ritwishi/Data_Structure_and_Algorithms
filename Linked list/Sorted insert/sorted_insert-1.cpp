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
    node *curr1 = head;

    while (curr1 != NULL)
    {
        cout << curr1->data << " ";

        curr1 = curr1->next;
    }
}

node *insert_sort(node *head, int x)
{
    node *curr = new node(x);

    if (head == NULL)
    {
        return curr;
    }

    if (head->data > curr->data)
    {
        curr->next = head;

        return curr;
    }

    node *temp = head;

    while (temp->next != NULL && temp->next->data < curr->data)
    {
        temp = temp->next;
    }

    curr->next = temp->next;

    temp->next = curr;

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

    int x;

    cin >> x;

    head = insert_sort(head, x);

    print(head);
}