#include <bits/stdc++.h>
using namespace std;

struct queue
{
    int cap;
    int size;

    int *arr;

    queue(int cap)
    {
        this->cap = cap;

        this->size = 0;

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

    void enque(int x)
    {
        if (isfull())
        {
            return;
        }

        arr[size] = x;

        size++;
    }

    void deque()
    {
        if (isempty())
        {
            return;
        }

        for (int i = 0; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        size--;
    }

    int getFront()
    {
        if (isempty())
        {
            return -1;
        }

        else
        {
            return arr[0];
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
            return arr[size - 1];
        }
    }
};
