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

    void minheapify(int i)
    {
        int smallest = i;

        int it = left(i);

        int rt = right(i);

        if (it < size && arr[it] < arr[i])
        {
            smallest = it;
        }

        if (rt < size && arr[rt] < arr[smallest])
        {
            smallest = rt;
        }

        if (smallest != i)
        {
            swap(arr[i], arr[smallest]);

            minheapify(smallest);
        }
    }

    int extractmin()
    {
        if (size == 0)
        {
            return INT_MAX;
        }

        if (size == 1)
        {
            size--;

            return arr[0];
        }

        swap(arr[0], arr[size - 1]);

        size--;

        minheapify(0);

        return arr[size];
    }
};

int main()
{
    MinHeap h(11);

    h.insert(3);

    h.insert(2);

    h.insert(15);

    h.insert(20);

    cout << h.extractmin() << " ";

    return 0;
}
