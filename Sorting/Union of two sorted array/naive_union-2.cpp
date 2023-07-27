/* Union of two array-------> Q((m+n)* log(m+n))

i/p-arr[m]={3,5,8}  & brr[n]={2,8,9,10,15}                  i/p-arr[m]={2,3,3,3,4,4}   & brr[n]={4,4}
                                                     &
o/p- {2,3,5,8,9,10,15}                                      o/p- { 2,3,4}

*/

#include <bits/stdc++.h>
using namespace std;

void union_array(int arr[], int brr[], int m, int n)
{
    int c[m + n];

    for (int i = 0; i < m; i++)
    {
        c[i] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        c[m + i] = brr[i];
    }

    sort(c, c + m + n);

    for (int i = 0; i < (m + n); i++)
    {
        if (i == 0 || c[i] != c[i - 1])
        {
            cout << c[i] << " ";
        }
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

    union_array(arr, brr, m, n);

    return 0;
}