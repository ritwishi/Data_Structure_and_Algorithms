// Sort kSorted array

// i/p-{9,8,7,18,19,17}

// o/p-{7,8,9,17,18,19}

#include <bits/stdc++.h>
using namespace std;

void sortK(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i <= k; i++)
    {
        pq.push(arr[i]);
    }

    int index = 0;

    for (int i = k + 1; i < n; i++)
    {
        arr[index++] = pq.top();

        pq.pop();

        pq.push(arr[i]);
    }

    while (pq.empty() == false)
    {
        arr[index++] = pq.top();

        pq.pop();
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

    int k;

    cin >> k;

    sortK(arr, n, k);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}