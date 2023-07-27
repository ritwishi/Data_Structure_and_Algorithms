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

    if(head==NULL)
    {
        return temp;
    }

    temp->next = head;

    return temp;
}

int main()
{
    node *head = NULL;

    head = insert_begin(head, 30);

    head = insert_begin(head, 20);

    head = insert_begin(head, 10);

    print(head);

    return 0;
}