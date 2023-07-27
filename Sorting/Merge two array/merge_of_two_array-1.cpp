/* Merge of two array

  i/p-arr[m]={10,15,20,20}      ,    brr[n]={1,12}

  o/p- crr[m+n]={1,10,12,15,20,20}

*/

#include <bits/stdc++.h>
using namespace std;

void merge_array(int arr[], int brr[], int m, int n)
{
    int crr[m + n];

    for (int i = 0; i < m; i++)
    {
        crr[i] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        crr[m + i] = brr[i];
    }

    sort(crr, crr + m + n);

    for (int i = 0; i < (m + n); i++)
    {
        cout << crr[i] << " ";
    }
}

int main()
{
    int m;
    cin >> m;

    int arr[m];

    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    int n;
    cin >> n;

    int brr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }

    merge_array(arr, brr, m, n);

    return 0;
}