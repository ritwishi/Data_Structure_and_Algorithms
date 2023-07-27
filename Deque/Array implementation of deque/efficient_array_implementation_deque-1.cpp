#include <bits/stdc++.h>
using namespace std;

struct Deque
{
    int size, cap, front;

    int *arr;

    Deque(int cap)
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

    void deleteFront()
    {
        if (isempty())
        {
            return;
        }

        front = (front + 1) % cap;

        size--;
    }

    void insertRear(int x)
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

    void insertFront(int x)
    {
        if (isfull())
        {
            return;
        }

        front = (front - 1 + cap) % cap;

        arr[front] = x;

        size++;
    }

    void deleteRear()
    {
        if (isempty())
        {
            return;
        }

        size--;
    }

    int lsize()
    {
        return size;
    }
};

int main()
{
    Deque dq(10);

    dq.insertFront(10);
    dq.insertRear(20);
    dq.insertFront(30);
    dq.insertRear(50);

    dq.deleteFront();
    dq.deleteRear();

    cout << dq.lsize() << endl;

    return 0;
}