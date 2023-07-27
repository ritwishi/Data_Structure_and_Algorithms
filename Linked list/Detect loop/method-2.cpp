#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

bool isLoop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }

    map<Node *, bool> visted;

    Node *curr = head;

    while (curr != NULL)
    {
        if (visted[curr] == true)
        {
            return true;
        }

        visted[curr] = true;

        curr = curr->next;
    }

    return false;
}

int main()
{
    Node *head = new Node(15);
    head->next = new Node(10);
    head->next->next = new Node(12);
    head->next->next->next = new Node(20);
    head->next->next->next->next = head->next;
    if (isLoop(head))
        cout << "Loop found";
    else
        cout << "No Loop";
    return 0;
}
