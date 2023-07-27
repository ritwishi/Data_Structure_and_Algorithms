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
    while (head != NULL)
    {
        cout << head->data << " ";

        head = head->next;
    }
}

node *insert_end(node *head, int x)
{
    node *temp = new node(x);

    if (head == NULL)
    {
        return temp;
    }

    node *curr = head;

    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    curr->next = temp;

    return head;
}

int main()
{
    node *head = NULL;

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;

        cin >> num;

        head = insert_end(head, num);
    }

    int x;

    cin >> x;

    head = insert_end(head, x);

    print(head);

    return 0;
}