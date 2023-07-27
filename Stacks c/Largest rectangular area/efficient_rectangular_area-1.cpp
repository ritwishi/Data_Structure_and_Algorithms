#include <bits/stdc++.h>
using namespace std;

int largest_rec(int arr[], int n)
{
    int ps[n], ns[n];

    stack<int> s;

    s.push(0);

    ps[0] = -1;

    for (int i = 1; i < n; i++)
    {
        while (s.empty() == false && arr[s.top()] >= arr[i])
        {
            s.pop();
        }

        int pse = s.empty() ? -1 : s.top();

        ps[i] = pse;

        s.push(i);
    }

    while (s.empty() == false)
    {
        s.pop();
    }

    s.push(n - 1);

    ns[n - 1] = n;

    for (int j = n - 2; j >= 0; j--)
    {
        while (s.empty() == false && arr[s.top()] >= arr[j])
        {
            s.pop();
        }

        int nse = s.empty() ? n : s.top();

        ns[j] = nse;

        s.push(j);
    }

    
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];

        curr = curr + (i - ps[i] - 1) * arr[i];

        curr = curr + (ns[i] - i - 1) * arr[i];

        res = max(res, curr);
    }

    return res;
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

    cout << largest_rec(arr, n) << endl;

    return 0;
}