#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;

    node *next;

    node *prev;

    node(int data)
    {
        this->data = data;

        this->next = NULL;

        this->prev = NULL;
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

node *insert_end(node *head, int x)
{
    node *temp = new node(x);

    head->prev->next = temp;

    temp->prev = head->prev;

    temp->next = head;

    head->prev = temp;

    return head;
}

int main()
{
    node *head = new node(10);

    node *temp1 = new node(20);

    node *temp2 = new node(15);

    node *temp3 = new node(30);

    head->next = temp1;
    temp1->prev = head;

    temp1->next = temp2;
    temp2->prev = temp1;

    temp2->next = temp3;
    temp3->prev = temp2;

    temp3->next = head;
    head->prev = temp3;

    print(head);

    cout << endl;

    int x;

    cin >> x;

    head = insert_end(head, x);

    print(head);

    return 0;
}