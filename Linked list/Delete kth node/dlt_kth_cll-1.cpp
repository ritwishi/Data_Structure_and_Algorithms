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

node *dlt_kth(node *head, int k)
{
    node *temp = head;

    for (int i = 0; i < k - 2; i++)
    {
        temp = temp->next;
    }

    node *curr = temp->next;

    temp->next = temp->next->next;

    delete (curr);

    return head;
}

int main()
{
    node *head = new node(10);

    head->next = new node(15);

    head->next->next = new node(35);

    head->next->next->next = new node(25);

    head->next->next->next->next = new node(30);

    head->next->next->next->next->next = head;

    print(head);

    cout << endl;

    int k;

    cin >> k;

    head = dlt_kth(head, k);

    print(head);

    return 0;
}