#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int *arr;

    int cap, front, size;

    Queue(int cap)
    {
        this->cap = cap;

        this->size = 0;

        this->front = 0;

        this->arr = new int[cap];
    }

    bool isfull()
    {
        return (size == cap);
    }

    bool isempty()
    {
        return (size == 0);
    }

    int getFront()
    {
        if (isempty())
        {
            return -1;
        }

        else
        {
            return front;
        }
    }

    int getRear()
    {
        if (isempty())
        {
            return -1;
        }

        else
        {
            return ((front + size - 1) % cap);
        }
    }

    void enqueue(int x)
    {
        if (isfull())
        {
            return;
        }

        int rear = getRear();

        rear = (rear + 1) % cap;

        arr[rear] = x;

        size++;
    }

    void dequeue()
    {
        if (isempty())
        {
            return;
        }

        front = (front + 1) % cap;

        size--;
    }
};

int main()
{
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();
    q.dequeue();
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.dequeue();
    cout << "Queue Front : " << q.getFront() << endl;
    cout << "Queue Rear : " << q.getRear() << endl;
}