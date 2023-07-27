//naive remove duplicate
// i/p:arr[]={10,20,20,30,30,30,30}     o/p:arr[]={10,20,30,_,_,_,_}
#include <bits/stdc++.h>
using namespace std;

int rem_dup(int arr[], int n)
{
    int temp[n];
    temp[0] = arr[0];
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (temp[res - 1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }
    for (int i = 0; i < res; i++)
    {
        arr[i] = temp[i];
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

    cout << "before removing duplicate" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    n = rem_dup(arr, n);

    cout << "after removing duplicate" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}