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

int search_pos(node *head, int x)
{
    int count = 0;

    while (head != NULL)
    {
        count++;

        if (head->data == x)
        {
            return count;
        }

        head = head->next;
    }

    return -1;
}

int main()
{
    node *head = new node(10);

    head->next = new node(20);

    head->next->next = new node(30);

    head->next->next->next = new node(40);

    print(head);

    cout << endl;

    int x;

    cin >> x;

    cout << search_pos(head, x) << endl;

    return 0;
}