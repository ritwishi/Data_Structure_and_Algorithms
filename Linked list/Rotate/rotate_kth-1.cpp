#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;

    node *next = NULL;

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

node *rotateK(node *head, int k)
{
    node *curr = head;

    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    curr->next = head;

    while (k > 0)
    {
        head = head->next;
        k--;
    }

    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = NULL;

    return head;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    head->next->next->next->next->next = new node(60);
    head->next->next->next->next->next->next = new node(70);

    int k;
    cin >> k;

    head = rotateK(head, k);

    print(head);

    return 0;
}