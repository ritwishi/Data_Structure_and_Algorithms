// delete any element

#include<bits/stdc++.h>
using namespace std;

int delete_ele(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {

        if (arr[i] == x)
        break;
    }
    if (i == n)
    {
        return n;
    }
    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    return n - 1;
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

    int x;
    cin >> x;

    cout << "before deletion" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    n = delete_ele(arr, n, x);

    cout << "after deletion" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}