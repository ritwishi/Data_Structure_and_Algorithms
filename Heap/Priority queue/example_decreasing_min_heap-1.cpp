#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 5, 15};

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        arr[i] = -arr[i];
    }

    priority_queue<int> pq(arr, arr + 3);

    while (pq.empty() == false)
    {
        cout << -pq.top() << " ";

        pq.pop();
    }

    return 0;
}