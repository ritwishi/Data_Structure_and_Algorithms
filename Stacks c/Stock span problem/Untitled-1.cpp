#include <bits/stdc++.h>
using namespace std;

void stock_span(int arr[], int n)
{
    int max = 0;

    cout << "1" << " ";

    for (int i = 1; i < n; i++)
    {

        if (arr[i] <= arr[i - 1])
        {
            cout << (i - (i - 1)) << " ";

            max = i - 1;
        }

        else
        {
            cout << i - max << " ";
        }

         if (arr[i] > arr[0])
        {
            cout << i + 1 << " ";

            max = i;
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

    stock_span(arr, n);

    return 0;
}