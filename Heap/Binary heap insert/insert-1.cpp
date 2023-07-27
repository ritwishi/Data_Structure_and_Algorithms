#include <bits/stdc++.h>
using namespace std;

class MinHeap
{
    int *arr;

    int size;

    int cap;

public:
    MinHeap(int cap)
    {
        this->size = 0;

        this->cap = cap;

        this->arr = new int[cap];
    }

    int left(int i)
    {
        return (2 * i + 1);
    }

    int right(int i)
    {
        return (2 * i + 2);
    }

    int parent(int i)
    {
        return ((i - 1) / 2);
    }

    void insert(int x)
    {
        if (cap == size)
        {
            return;
        }

        size++;

        arr[size - 1] = x;

        for (int i = size - 1; i != 0 && arr[parent(i)] > arr[i];)
        {
            swap(arr[i], arr[parent(i)]);

            i = parent(i);
        }
    }
};

int main()
{
    MinHeap h(11);

    h.insert(3);

    h.insert(2);

    h.insert(15);

    h.insert(20);

    return 0;
}
