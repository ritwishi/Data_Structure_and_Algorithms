#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;

    node *next;

    node *prev;

    node(int data)
    {
        this->data = data;

        this->next = NULL;

        this->prev = NULL;
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

node *insert_end(node *head, int z)
{
    node *curr = new node(z);

    if (head == NULL)
    {
        return curr;
    }

    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = curr;

    curr->prev = temp;

    return head;
}

int main()
{
    node *head = NULL;

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;

        cin >> x;

        head = insert_end(head, x);
    }

    print(head);

    cout << endl;

    int y;

    cin >> y;

    head = insert_end(head, y);

    print(head);
}