/* KADANE ALGORITHM (max_sum_subarray )

i/p-arr[]={-3,8,-2,4,-5,6}
o/p-         11


*/
#include <bits/stdc++.h>
using namespace std;

int max_sum(int arr[], int n)
{
    int res = arr[0];
    int max_ending = arr[0];

    for (int i = 1; i < n; i++)
    {
        max_ending = max(max_ending + arr[i], arr[i]); // ye tumhara kaha se kaha tk add hoga(8---6) hoga

        res = max(res, max_ending); // ye maan lo diffrent diffrent add hoga usme check karne ke liye
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

    cout << max_sum(arr, n) << endl;

    return 0;
}