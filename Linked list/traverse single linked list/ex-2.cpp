#include <bits/stdc++.h>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// function

void fun(Node *head)
{
    head = head->next;
}

int main()
{
    // 10->20->30->NULL
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    fun(head);
    cout << head->data << " "; 
}