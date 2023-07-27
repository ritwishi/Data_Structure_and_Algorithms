/* merge of two array

i/p-arr[m]={10,20,50}   ,     brr[n]={5,50,50}

o/p- {5,10,15,50,50,50}

*/
#include <bits/stdc++.h>
using namespace std;

void merge_array(int arr[], int brr[], int m, int n)
{
    int i = 0;
    int j = 0;

    while (i < m && j < n) // run until one array exhausted
    {
        if (arr[i] <= brr[j])
        {
            cout << arr[i] << " ";
            i++;
        }

        else
        {
            cout << brr[j] << " ";
            j++;
        }
    }

    while (i < m) // only onle loop run at a time
    {
        cout << arr[i] << " ";
        i++;
    }

    while (j < n) // or only onle loop run at a time
    {
        cout << brr[j] << " ";
        j++;
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

    for (int j = 0; j < n; j++)
    {
        cin >> brr[j];
    }

    merge_array(arr, brr, m, n);

    return 0;
}