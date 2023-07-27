#include <bits/stdc++.h>
using namespace std;

struct Deque
{
    int cap, size;

    int *arr;

    Deque(int cap)
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

    void insertRear(int x)
    {
        if (isfull())
        {
            return;
        }

        arr[size] = x;

        size++;
    }

    void deleteFront()
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

    void insertFront(int x)
    {
        if (isfull())
        {
            return;
        }

        for (int i = size - 1; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }

        arr[0] = x;

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