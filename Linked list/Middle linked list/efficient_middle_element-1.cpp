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

void print_middle(node *head)
{
    if (head == NULL)
    {
        return;
    }

    node *slow=head;

    node *fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;

        fast=fast->next->next;
    }

    cout<<slow->data<<endl;
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

    print_middle(head);

    return 0;
}