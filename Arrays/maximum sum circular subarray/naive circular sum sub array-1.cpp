/*  maximum circular subarray sum

 i/p-arr[]={5,-2,3,4}
 o/p- 12



*/
#include <bits/stdc++.h>
using namespace std;

int max_circular_sum_sub_array(int arr[], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int sum = arr[i];

        for (int j = 1; j < n; j++)
        {
            int index = (i + j) % n;

            sum = sum + arr[index];

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

    cout << max_circular_sum_sub_array(arr, n) << endl;

    return 0;
}