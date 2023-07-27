#include <bits/stdc++.h>
using namespace std;

void ceiling_left(int arr[], int n)
{
    cout << "-1"
         << " ";

    set<int> s;

    s.insert(arr[0]);

    for (int i = 1; i < n; i++)
    {
        auto it = s.lower_bound(arr[i]);

        if (it != s.end())
        {
            cout << *it << " ";
        }

        else
        {
            cout << "-1"
                 << " ";
        }

        s.insert(arr[i]);
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

    ceiling_left(arr, n);

    return 0;
}