/* Union of two array

i/p-arr[m]={3,5,8}  & brr[n]={2,8,9,10,15}                  i/p-arr[m]={2,3,3,3,4,4}   & brr[n]={4,4}
                                                     &
o/p- {2,3,5,8,9,10,15}                                      o/p- { 2,3,4}

*/

#include <bits/stdc++.h>
using namespace std;

void union_array(int arr[], int brr[], int m, int n)
{
    int i = 0, j = 0;

    while (i < m && j < n)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            i++;

            continue;
        }

        if (j > 0 && brr[j] == brr[j - 1])
        {
            j++;

            continue;
        }

        if (arr[i] < brr[j])
        {
            cout << arr[i] << " ";

            i++;
        }

        else if (arr[i] > brr[j])
        {
            cout << brr[j] << " ";

            j++;
        }

        else
        {
            cout << arr[i] << " ";

            i++;

            j++;
        }
    }

    while (i < m)
    {
        if (i == 0 || arr[i] != arr[i - 1])
        {
            cout << arr[i] << " ";

            i++;
        }
    }

    while (j < n)
    {
        if (j == 0 || brr[j] != brr[j - 1])
        {
            cout << brr[j] << " ";

            j++;
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