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

void print_middle(node *head)
{
    if (head == NULL)
    {
        return;
    }

    node *temp = head;

    int count = 0;

    while (temp != NULL)
    {
        count++;

        temp = temp->next;
    }

    node *curr = head;

    for (int i = 0; i < count / 2; i++)
    {
        curr = curr->next;
    }

    cout << curr->data << endl;
}

int main()
{
    node *head = new node(10);

    head->next = new node(20);

    head->next->next = new node(30);

    head->next->next->next = new node(40);

    head->next->next->next->next = new node(50);

    print(head);

    cout << endl;

    print_middle(head);

    return 0;
}