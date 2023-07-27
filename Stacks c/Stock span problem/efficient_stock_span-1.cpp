#include <bits/stdc++.h>
using namespace std;

void print_span(int arr[], int n)
{
    stack<int> s;

    s.push(0);

    cout << "1"
         << " ";

    for (int i = 1; i < n; i++)
    {
        while (s.empty() == false && arr[s.top()] <= arr[i])
        {
            s.pop();
        }

        int span = s.empty() ? i + 1 : i - s.top();

        cout << span << " ";

        s.push(span);
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

    print_span(arr, n);

    return 0;
}