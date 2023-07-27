/* longest even odd subarray

 i/p-arr[]={10,12,14,7,8}
 o/p-  3

*/
#include <bits/stdc++.h>
using namespace std;

int max_length_even_odd(int arr[], int n)
{
    int res = 1;
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if ((arr[i - 1] % 2) != (arr[i] % 2))
        {
            count++;
            res = max(res, count);
        }
        else
        {
            count = 1;
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

    cout << max_length_even_odd(arr, n) << endl;
    return 0;
}