
/* Naive partion of an array

i/p- arr[]={5,13,6,12,11,9,8}

o/p- arr[]={5,6,8,9,11,12,13}

res= 3

*/

#include <bits/stdc++.h>
using namespace std;

int partion(int arr[], int l, int h, int p)
{
    int temp[h - l + 1], index = 0;

    for (int i = l; i <= h; i++)
    {
        if (arr[i] < arr[p])
        {
            temp[index] = arr[i];

            index++;
        }
    }

    for (int i = l; i <= h; i++)
    {
        if (arr[i] == arr[p])
        {
            temp[index] = arr[i];

            index++;
        }
    }

    int res = l + index - 1;

    for (int i = l; i <= h; i++)
    {
        if (arr[i] > arr[p])
        {
            temp[index] = arr[i];

            index++;
        }
    }

    for (int i = l; i <= h; i++)
    {
        arr[i] = temp[i - l];
    }

    for (int i = 0; i <= h; i++)
        cout << arr[i] << " ";

    cout << endl;

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

    int p;
    cin >> p;

    int l = 0, h = n - 1;

    cout << partion(arr, l, h, p) << endl;

    return 0;
}