#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;

    node *prev;

    node *next;

    node(int data)
    {
        this->data = data;

        this->prev = NULL;

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

node *insert_begin(node *head, int x)
{
    node *temp = new node(x);

    temp->next = head;

    if (head != NULL)

    {
        head->prev = temp;
    }

    return temp;
}

int main()
{
    node *head = new node(10);

    node *temp1 = new node(20);

    node *temp2 = new node(30);

    head->next = temp1;

    temp1->prev = head;

    temp1->next = temp2;

    temp2->prev = temp1;

    print(head);

    cout << endl;

    int x;

    cin >> x;

    head = insert_begin(head, x);

    print(head);

    return 0;
}