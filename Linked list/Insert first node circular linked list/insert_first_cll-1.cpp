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

    node *curr1 = head;

    do
    {

        cout << curr1->data << " ";

        curr1 = curr1->next;

    } while (curr1 != head);
}

node *insert_first(node *head, int x)
{
    node *curr = new node(x);

    if (head == NULL)
    {
        curr->next = curr;
    }

    else
    {
        node *temp = head;

        while (temp->next != head)
        {
            temp = temp->next;
        }

        temp->next = curr;

        curr->next = head;
    }

    return curr;
}

int main()
{
    node *head = new node(10);

    head->next = new node(30);

    head->next->next = new node(20);

    head->next->next->next = head;

    print(head);

    cout << endl;

    int x;

    cin >> x;

    head = insert_first(head, x);

    print(head);

    return 0;
}