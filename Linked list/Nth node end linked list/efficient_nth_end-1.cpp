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

int print_end_nth(node *head, int n)
{
    if (head == NULL)
    {
        return -1;
    }

    node *first = head;

    for (int i = 0; i < n; i++)
    {
        first = first->next;
    }

    node *second = head;

    while (first != NULL)
    {
        first = first->next;

        second = second->next;
    }

    return second->data;
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

    int n;

    cin >> n;

    cout << print_end_nth(head, n) << endl;

    return 0;
}