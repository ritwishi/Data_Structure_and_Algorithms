// binary search (find array element)
// i/p- arr[]={10,20,30,40,50,60,70} ,x=20               time&space- Q(log(n)) & Q(1)
// o/p- 1

#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
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

    cout << binary_search(arr, n, x) << endl;

    return 0;
}