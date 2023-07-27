/* Maximum in all subarrays of size k

  i/p- arr[]={10,8,5,12,15,7,6}

  o/p-        10,12,15,15,15

*/
#include <bits/stdc++.h>
using namespace std;

void print_max(int arr[], int n, int k)
{
    for (int i = 0; i < n - k + 1; i++)
    {
        int mx = arr[i];

        for (int j = i + 1; j < i + k; j++)
        {
            mx = max(mx, arr[j]);
        }

        cout << mx << " ";
    }
}

int main()
{
    int n;

    cin >> n;

    int k;

    cin >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    print_max(arr, n, k);

    return 0;
}