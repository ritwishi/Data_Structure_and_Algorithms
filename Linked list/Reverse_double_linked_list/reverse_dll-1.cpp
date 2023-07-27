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

node *reverse_dll(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *temp = NULL;

    node *curr = head;

    while (curr != NULL)
    {
        temp = curr->prev;

        curr->prev = curr->next;

        curr->next = temp;

        curr = curr->prev;
    }

    return temp->prev;
}

int main()
{
    node *head = new node(10);

    node *temp1 = new node(20);

    node *temp2 = new node(30);

    node *temp3 = new node(40);

    head->next = temp1;

    temp1->prev = head;

    temp1->next = temp2;

    temp2->prev = temp1;

    temp2->next = temp3;

    temp3->prev = temp2;

    print(head);

    cout << endl;

    head = reverse_dll(head);

    print(head);
}