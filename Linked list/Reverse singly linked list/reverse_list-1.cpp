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

node *reverse_list(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *rev_list = new node(head->data);

    while (head->next != NULL)
    {
        head = head->next;

        node *temp = new node(head->data);

        temp->next = rev_list;

        rev_list = temp;
    }

    return rev_list;
}

int main()
{
    node *head = new node(10);

    head->next = new node(20);

    head->next->next = new node(30);

    head->next->next->next = new node(40);

    print(head);

    cout << endl;

    head = reverse_list(head);

    print(head);

    return 0;
}