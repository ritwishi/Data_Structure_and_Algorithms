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

node *reverseK(node *head, int k)
{
    node *curr = head;
    node *prev = NULL;
    node *next = NULL;
    int count = 0;

    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if (next != NULL)
    {
        node *rest_head = reverseK(next, k);
        head->next = rest_head;
    }

    return prev;
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

    head = reverseK(head, k);

    print(head);

    return 0;
}