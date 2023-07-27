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
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node *rev_list(node *curr, node *prev)
{
    if (curr == NULL)
    {
        return prev;
    }

    node *next = curr->next;
    curr->next = prev;

    return rev_list(next, curr);
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);

    head = rev_list(head, NULL);
    print(head);

    return 0;
}