/*
left rotation by d
i/p: arr[]={1,2,3,4,5}  d=2

      idx = 0,1,2,3,4

o/p: arr[]={3,4,5,1,2}

0---->2
1---->3
2---->4
3---->0
4---->1



*/
#include <bits/stdc++.h>
using namespace std;
void left_rot_d(int arr[], int n, int d)
{
    int temp[n];
    for (int i = 0; i < n; i++)
        temp[i] = arr[i];
    for (int i = 0; i < n; i++)
        arr[i] = temp[(i + d) % n];
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