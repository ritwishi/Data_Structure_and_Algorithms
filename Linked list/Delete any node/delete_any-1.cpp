#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;

    Node *next;

    Node(int data)
    {
        this->data = data;

        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *curr = head;

    while (curr != NULL)
    {
        cout << curr->data << " ";

        curr = curr->next;
    }
}

Node *delete_any(Node *head, int x)
{
    if (x == 1)
    {
        if (head == NULL)
        {
            return NULL;
        }

        else
        {
            Node *temp1 = head->next;

            delete (head);

            return temp1;
        }
    }

    Node *curr1 = head;

    int count = 1;

    while (curr1->next != NULL)
    {
        count++;

        curr1 = curr1->next;
    }

    if (count == x)
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

        Node *temp2 = head;

        while (temp2->next->next != NULL)
        {
            temp2 = temp2->next;
        }

        delete (temp2->next);

        temp2->next = NULL;

        return head;
    }

    Node *curr = head;

    Node *temp = head->next->next;

    for (int i = 0; i < x - 2; i++)
    {

        curr = curr->next;

        temp = temp->next;
    }

    delete (curr->next);

    curr->next = temp;

    return head;
}

int main()
{
    Node *head = new Node(10);

    head->next = new Node(20);

    head->next->next = new Node(30);

    head->next->next->next = new Node(40);

    print(head);

    cout << endl;

    int x;

    cin >> x;

    head = delete_any(head, x);

    print(head);

    return 0;
}