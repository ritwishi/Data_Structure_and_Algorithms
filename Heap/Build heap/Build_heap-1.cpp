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
        if (size == cap)
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

    void minHeapify(int i)
    {
        int lt = left(i);

        int rt = right(i);

        int smallest = i;

        if (lt < size && arr[lt] < arr[i])
        {
            smallest = lt;
        }

        if (rt < size && arr[rt] < arr[smallest])
        {
            smallest = rt;
        }

        if (smallest != i)
        {
            swap(arr[i], arr[smallest]);

            minHeapify(smallest);
        }
    }

    void buildHeap()
    {
        for (int i = (size - 2) / 2; i >= 0; i--)
        {
            minHeapify(i);
        }
    }
};

int main()
{
    MinHeap h(11);

    return 0;
}