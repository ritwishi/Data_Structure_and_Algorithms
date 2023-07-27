// max element index
// arr[4]={5,8 12,10}
#include <bits/stdc++.h>
using namespace std;

int max_ele_idx(int arr[], int n)
{
    int max_ele = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[max_ele])
            max_ele = i;
    }
    return max_ele;
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
    cout << max_ele_idx(arr, n) << endl;

    return 0;
}