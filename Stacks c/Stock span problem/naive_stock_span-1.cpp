#include <bits/stdc++.h>
using namespace std;

void print_span(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int span = 1;

        for (int j = i - 1; j >= 0 && arr[j] <= arr[i]; j--)

        {
            span++;
        }

        cout << span << " ";
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