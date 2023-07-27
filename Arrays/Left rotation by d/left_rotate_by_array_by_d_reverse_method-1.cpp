/*
 left rotation by d reverse method

i/p: arr[]={1,2,3,4,5}  d=2

      idx = 0,1,2,3,4

o/p: arr[]={3,4,5,1,2}

time complexity-Q(n)
space complexity-Q(1)

*/

#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void left_rot_d(int arr[], int n, int d)                          // arr[]={1,2,3,4,5}
{
    reverse(arr, 0, d - 1);                                       // arr[]={2,1,3,4,5}

    reverse(arr, d, n - 1);                                       //  arr[]={2,1,5,4,3}

    reverse(arr, 0, n - 1);                                       // arr[]={3,4,5,1,2}
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
    int d;
    cin >> d;

    cout << "before rotating by d place" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    left_rot_d(arr, n, d);
    cout << "after rotating by d place" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}