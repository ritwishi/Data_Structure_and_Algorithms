#include <bits/stdc++.h>
using namespace std;

void ceiling_left(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
       
        int ans = INT_MAX;

        for (int j = i - 1; j >= 0; j--)
        {

            if (arr[j] > arr[i])
            {
                int res = arr[j];

                ans = min(res, ans);
            }
        }

        if (ans != INT_MAX)
        {
            cout << ans << " ";
        }

        else
        {
            cout << "-1"
                 << " ";
        }
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