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

    do
    {
        cout << curr1->data << " ";

        curr1 = curr1->next;

    } while (curr1 != head);
}

node *dlt_first(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    node *temp = head;

    node *curr = head->next;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = curr;

    delete (head);

    return curr;
}

int main()
{
    node *head = new node(10);

    head->next = new node(15);

    head->next->next = new node(20);

    head->next->next->next = head;

    print(head);

    cout << endl;

    head = dlt_first(head);

    print(head);

    return 0;
}