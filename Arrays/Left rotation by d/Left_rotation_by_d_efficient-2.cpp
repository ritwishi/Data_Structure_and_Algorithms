/*
 left rotation by d efficient method

i/p: arr[]={1,2,3,4,5}  d=2

      idx = 0,1,2,3,4

o/p: arr[]={3,4,5,1,2}

time complexity-Q(n)

*/
#include <bits/stdc++.h>
using namespace std;
void left_rot_d(int arr[], int n, int d)                  // time complexity-Q(d+n+d-d)
                                                          //   Q(n+d)
                                                          //   Q(N)
{
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i]; // temp[d]={1,2}
    }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i]; // arr[n]={3,4,5,4,5}
    }
    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i]; // arr[n]={3,4,5,1,2}
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