// find element in an infinite size array
// arr[]={1,10,15,20,40,60,80,100,200,500,1000....}

#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int low, int high, int x)
{

    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;

    if (arr[mid] == x)
    {
        return mid;
    }

    else if (arr[mid] > x)
    {
        return binary_search(arr, low, mid - 1, x);
    }

    else
    {
        return binary_search(arr, mid + 1, high, x);
    }
}

int search(int arr[], int x)
{
    if (arr[0] == x)
    {
        return 0;
    }

    int i = 1;

    while (arr[i] < x)
    {
        i = i * 2;
    }

    if (arr[i] == x)
    {
        return i;
    }

    else
    {
        return binary_search(arr, i / 2 + 1, i - 1, x);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 5, 5};

    int x = 4;

    cout << search(arr, x) << endl;

    return 0;
}