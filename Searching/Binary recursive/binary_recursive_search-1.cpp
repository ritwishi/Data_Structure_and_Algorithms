// binary search using recursion (find array element)
// i/p- arr[]={10,20,30,40,50,60,70} ,x=20                      time&space- Q(log(n)) & Q(n)
// o/p- 1

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

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    int low = 0, high = n - 1;

    cout << binary_search(arr, low, high, x) << endl;

    return 0;
}