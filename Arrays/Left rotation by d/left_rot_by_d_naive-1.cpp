/*
 left rotation by d naive method

i/p: arr[]={1,2,3,4,5}  d=2

      idx = 0,1,2,3,4

o/p: arr[]={3,4,5,1,2}

time complexity-Q(n^2)

*/

#include <bits/stdc++.h>
using namespace std;
void left_rot_d(int arr[], int n, int d)
{
    while (d > 0)
    {
        int i = 0;
        while (i < n - 1)
        {
            swap(arr[i], arr[i + 1]);
            i++;
        }
        d--;
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