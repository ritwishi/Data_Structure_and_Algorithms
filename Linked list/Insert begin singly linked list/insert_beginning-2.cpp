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

node *insert_begin(node *head, int x)
{
    node *temp = new node(x);

    temp->next = head;

    return temp;
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
        head = insert_begin(head, num);
    }

    int x;

    cin >> x;

    head = insert_begin(head, x);

    print(head);

    return 0;
}