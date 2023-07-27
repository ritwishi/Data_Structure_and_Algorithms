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

struct Queue
{
    node *front;

    node *rear;

    int size;

    Queue()
    {
        this->front = NULL;

        this->rear = NULL;

        this->size = 0;
    }

    void enqueue(int x)
    {
        node *temp = new node(x);

        if (front == NULL)
        {
            front = temp;
            rear = temp;

            return;
        }

        rear->next = temp;

        rear = temp;

        size++;
    }

    void dequeue()
    {
        if (front == NULL)
        {
            return;
        }

        node *temp1 = front;

        front = front->next;

        if (front == NULL)
        {
            rear = NULL;
        }

        delete (temp1);

        size--;
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();
    q.dequeue();
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.dequeue();
    cout << "Queue Front : " << (q.front)->data << endl;
    cout << "Queue Rear : " << (q.rear)->data << endl;
}