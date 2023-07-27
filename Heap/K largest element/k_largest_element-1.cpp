#include <bits/stdc++.h>
using namespace std;

void k_largest(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr + n);

    for (int i = 0; i <= k; i++)
    {
        pq.pop();
    }

    for (int i = k + 1; i < n; i++)
    {
        int temp = pq.top();

        pq.pop();

        cout << temp << " ";
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

    k_largest(arr, n, k);

    return 0;
}