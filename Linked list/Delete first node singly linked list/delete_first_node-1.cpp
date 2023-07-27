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
    node *curr = head;

    while (curr != NULL)
    {
        cout << curr->data << " ";

        curr = curr->next;
    }
}

node *dlt_head(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    else
    {
        node *temp = head->next;

        delete (head);

        return temp;
    }
}

int main()
{
    node *head = new node(10);

    head->next = new node(20);

    head->next->next = new node(30);

    head->next->next->next = new node(40);

    print(head);

    cout << endl;

    head = dlt_head(head);

    print(head);

    return 0;
}