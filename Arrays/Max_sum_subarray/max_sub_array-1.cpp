/*
   max_sub_array
   i/p-arr[]={5,3,8} - o/p-16
   i/p-arr[]={-6,-1,-8} -o/p- -1
*/
#include <bits/stdc++.h>
using namespace std;

int max_sub_array(int arr[], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];

            res = max(res, sum);
        }
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

    cout << max_sub_array(arr, n) << endl;

    return 0;
}