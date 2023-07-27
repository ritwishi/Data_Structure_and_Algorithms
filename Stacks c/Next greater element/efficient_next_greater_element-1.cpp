#include <bits/stdc++.h>
using namespace std;

void nxt_grt(int arr[], int n)
{
    stack<int> s;

    stack<int> st;

    s.push(n - 1);

    st.push(-1);

    for (int i = n - 2; i >= 0; i--)
    {
        while (s.empty() == false && arr[s.top()] <= arr[i])
        {
            s.pop();
        }

        int span = s.empty() ? -1 : arr[s.top()];

        st.push(span);

        s.push(i);
    }

    while (st.empty() == false)
    {
        cout << st.top() << " ";

        st.pop();
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

    nxt_grt(arr, n);

    return 0;
}