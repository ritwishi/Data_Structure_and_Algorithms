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

        return curr;
    }

    else
    {
        curr->next = head->next;
        head->next = curr;

        int t = head->data;
        head->data = curr->data;
        curr->data = t;

        return head;
    }
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