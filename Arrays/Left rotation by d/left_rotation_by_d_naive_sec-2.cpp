/*
 left rotation by d naive2 method

i/p: arr[]={1,2,3,4,5}  d=2

      idx = 0,1,2,3,4

o/p: arr[]={3,4,5,1,2}

time comlexity-Q(nd)
*/

#include <bits/stdc++.h>
using namespace std;

void lRotate_one(int arr[], int n)
{
    int temp;
    temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

void left_rot_d(int arr[], int n, int d)
{
    for (int i = 0; i < d; i++)
    {
        lRotate_one(arr, n);
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