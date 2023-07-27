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
Node *remove_dup(Node *head)
{
    Node *curr = head;

    Node *list = new Node(head->data);

    Node *temp1 = list;

    while (curr->next != NULL)
    {
        if (curr->data != curr->next->data)
        {

            Node *temp = new Node(curr->next->data);

            list->next = temp;

            list = temp;

            curr = curr->next;
        }

        else
        {
            curr = curr->next;
        }
    }

    return temp1;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(20);
    head->next->next->next = new Node(30);
    head->next->next->next->next = new Node(30);
    head->next->next->next->next->next = new Node(30);

    head = remove_dup(head);

    print(head);

    return 0;
}