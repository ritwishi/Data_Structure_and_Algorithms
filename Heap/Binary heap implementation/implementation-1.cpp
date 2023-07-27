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
};

int main()
{
    MinHeap h(11);

    return 0;
}