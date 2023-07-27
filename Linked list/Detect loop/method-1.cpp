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
    map<Node *, int> m;
    Node *temp = head;

    while (temp != NULL)
    {

        if (temp->next == NULL)
        {
            return false;
        }

        m[temp]++;

        if (m[temp] == 2)
        {
            return true;
        }
        temp = temp->next;
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
