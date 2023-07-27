/*
Maximum difference
i/p- arr[]-{2,3,10,6,4,8,1}      o/p- 8



*/


#include <bits/stdc++.h>
using namespace std;

void maximum_difference(int arr[], int n)
{
    int res = arr[1] - arr[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] - arr[i] > res)
            {
                res = arr[j] - arr[i];
            }
        }
    }

    cout << res << endl;
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

    maximum_difference(arr, n);
    return 0;
}